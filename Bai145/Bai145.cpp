#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktToanChan(int[][100], int, int);
void HoanVi(int&, int&);
void XoaDong(int[][100], int&, int, int);
void XoaDongChan(int[][100], int&, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    XoaDongChan(b, k, l);
    cout << "\nMa tran luc sau: \n";
    Xuat(b, k, l);
    return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
    cout << "Nhap m: ";
    cin >> m;
    if (m < 2)
    {
        cout << "Nhap sai!";
        return;
    }
    cout << "Nhap n: ";
    cin >> n;
    if (n < 2)
    {
        cout << "Nhap sai!";
        return;
    }
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
int ktToanChan(int a[][100], int n, int d)
{
    int flag = 1;
    for (int j = 0; j < n; j++)
        if (a[d][j] % 2 != 0)
            flag = 0;
    return flag;
}
void HoanVi(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void XoaDong(int a[][100], int& m, int n, int d)
{
    for (int i = d; i < m - 1; i++)
        for (int j = 0; j < n; j++)
            HoanVi(a[i][j], a[i + 1][j]);
    m--;
}
void XoaDongChan(int a[][100], int& m, int n)
{
    for (int i = 0; i < m; i++)
        if (ktToanChan(a, n, i) == 1)
            XoaDong(a, m, n, i);
}