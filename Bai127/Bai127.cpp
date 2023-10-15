#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void SapCotTang(float[][100], int, int);
void SapCotGiam(float[][100], int, int);
void SapCotTangGiam(float[][100], int, int);

int main()
{
    float b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    SapCotTangGiam(b, k, l);
    cout << "\nMa tran luc sau: \n";
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
void SapCotTang(float a[][100], int m, int c)
{
    for (int i = 0; i < m - 1; i++)
        for (int j = 0; j < m; j++)
            if (a[i][c] > a[j][c])
                HoanVi(a[i][c], a[j][c]);
}
void SapCotGiam(float a[][100], int m, int c)
{
    for (int i = 0; i < m - 1; i++)
        for (int j = 0; j < m; j++)
            if (a[i][c] < a[j][c])
                HoanVi(a[i][c], a[j][c]);
}
void SapCotTangGiam(float a[][100], int m, int n)
{
    for (int j = 0; j < n; j++)
        if (j % 2 == 0)
            SapCotGiam(a, m, j);
        else
            SapCotTang(a, m, j);
}