#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void Xoay90Do(float[][100], int&, int&);
void Xoay270Do(float[][100], int&, int&);

int main()
{
    float b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    Xoay270Do(b, k, l);
    cout << "\nMa tran luc sau: ";
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
void Xoay90Do(float a[][100], int& m, int& n)
{
    float c[100][100];
    int row = n;
    int col = m;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            c[n - j - 1][i] = a[i][j];
        }
    m = row;
    n = col;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = c[i][j];
}
void Xoay270Do(float a[][100], int& m, int& n)
{
    Xoay90Do(a, m, n);
    Xoay90Do(a, m, n);
    Xoay90Do(a, m, n);
}