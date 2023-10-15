#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void HoanVi(int&, int&);
void SapChanTang(int[][100], int, int);
void SapLeGiam(int[][100], int, int);
void ChanTangLeGiam(int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    ChanTangLeGiam(b, k, l);
    cout << "\nMa tran luc sau: \n";
    Xuat(b, k, l);
    return 0;
}
void Nhap(int a[][100], int& m, int& n)
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
void Xuat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << fixed << setw(8) << setprecision(3) << a[i][j];
        cout << endl;
    }
}
void HoanVi(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SapChanTang(int a[][100], int m, int n)
{
    int c[100];
    int k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 == 0)
                c[k++] = a[i][j];
    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (c[i] > c[j])
                HoanVi(c[i], c[j]);
    k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 == 0)
                a[i][j] = c[k++];
}
void SapLeGiam(int a[][100], int m, int n)
{
    int c[100];
    int k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 != 0)
                c[k++] = a[i][j];
    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (c[i] < c[j])
                HoanVi(c[i], c[j]);
    k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 != 0)
                a[i][j] = c[k++];
}
void ChanTangLeGiam(int a[][100], int m, int n)
{
    SapChanTang(a, m, n);
    SapLeGiam(a, m, n);
}