#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int kt(float[][100], int, int, float[][100], int, int);
int ktCon(float[][100], int, int, float[][100], int, int);

int main()
{
    float c[100][100];
    int k, l;
    Nhap(c, k, l);
    cout << "\nMa tran me ban dau: \n";
    Xuat(c, k, l);
    float d[100][100];
    int row, col;
    Nhap(d, row, col);
    cout << "\nMa tran con ban dau: \n";
    Xuat(d, row, col);
    int kq = ktCon(d, row, col, c, k, l);
    if (kq == 1)
        cout << "\nMa tran D la con cua Ma tran C";
    else 
        cout << "\nMa tran D khong phai con cua Ma tran C";
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
int kt(float a[][100], int m, int n, float b[][100], int vtd, int vtc)
{
    for (int i = vtd; i < m + vtd; i++)
        for (int j = vtc; j < n + vtc; j++)
            if (a[i][j] != b[i][j])
                return 0;
    return 1;
}
int ktCon(float a[][100], int m, int n, float b[][100], int k, int l)
{
    if (m > k || n > l)
    {
        cout << "B khong phai la con cua A";
        return 0;
    }
    int flag = 0;
    for (int d = 0; d <= k - m; d)
        for (int c = 0; c <= l - n; c++)
            if (kt(a, m, n, b, d, c) == 1)
                flag = 1;
    return flag;
}