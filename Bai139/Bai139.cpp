#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void SapXepMang(float[], int);
void XoanOc(float[][100], int, int);

int main()
{
    float b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    XoanOc(b, k, l); 
    cout << "\nMa tran hinh xoan oc: \n";
    Xuat(b, k, l);
    return 0;
}
void Nhap(float a[][100], int& m, int& n)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i <= m - 1; i++)
        for (int j = 0; j <= n - 1; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
}
void Xuat(float a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << fixed << setw(8) << setprecision(3) << a[i][j];
        cout << endl;
    }
}
void HoanVi(float& a, float& b)
{
    float temp = a;
    a = b;
    b = temp;
}
void SapXepMang(float a[], int k)
{
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
            if (a[i] > a[j])
                HoanVi(a[i], a[j]);
}
void XoanOc(float a[][100], int m, int n)
{
    // Doi ma tran thanh mang 1D
    float* C_1D = new float[m * n];
    int C_1D_Index = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            C_1D[C_1D_Index] = a[i][j];
            C_1D_Index++;
        }
    SapXepMang(C_1D, C_1D_Index);
    //Doi mang 1D thanh Ma tran theo quy tac xoan oc (Duyet bien)
    int a_Row_Index = 0;
    int a_Col_Index = 0;
    int a_Index = 0;
    int a_Row = m;
    int a_Col = n;

    while (a_Row_Index < a_Row && a_Col_Index < a_Col)
    {
        for (int j = a_Col_Index; j < a_Col; j++)
        { 
            a[a_Row_Index][j] = C_1D[a_Index];
            a_Index++;
        }

        a_Row_Index++;

        for (int i = a_Row_Index; i < a_Row; i++)
        {
            a[i][a_Col - 1] = C_1D[a_Index];
            a_Index++;
        }

        a_Col--;

        if (a_Row_Index < a_Row)
        {
            for (int j = a_Col - 1; j >= a_Col_Index; j--)
            {
                a[a_Row - 1][j] = C_1D[a_Index];
                a_Index++;
            }

            a_Row--;
        }

        if (a_Col_Index < a_Col)
        {
            for (int i = a_Row - 1; i >= a_Row_Index; i--)
            {
                a[i][a_Col_Index] = C_1D[a_Index];
                a_Index++;
            }
            a_Col_Index++;
        }

    }
    delete[]C_1D;
}