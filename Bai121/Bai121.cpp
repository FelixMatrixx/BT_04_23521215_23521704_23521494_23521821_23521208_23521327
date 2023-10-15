#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&, int&, int&);
void Xuat(float[][100], int, int);
void HoanVi(float&, float&);
void HoanViCot(float[][100], int, int, int);

int main()
{
    float b[100][100];
    int k, l;
    int c1, c2;
    Nhap(b, k, l, c1, c2);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    HoanViCot(b, k, c1, c2);
    cout << "\nMa tran sau hoan vi: \n";
    Xuat(b, k, l);
    return 0;
}
void Nhap(float a[][100], int& m, int& n, int& c1, int& c2)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap cot 1: ";
    cin >> c1;
    cout << "Nhap cot 2: ";
    cin >> c2;
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
void HoanViCot(float a[][100], int m, int c1, int c2)
{
    for (int i = 0; i < m; i++)
        HoanVi(a[i][c1], a[i][c2]);
}