#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
void Xuat(int[][100], int, int);
int ktHoanThien(int);
int DemHoanThien(int[][100], int, int, int);

int main()
{
    int b[100][100];
    int k, l;
    int d;
    Nhap(b, k, l, d);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, Zl);
    int kq = DemHoanThien(b, k, l, d);
    cout << "So luong so hoan thien tren dong: " << kq;
    return 0;
}
void Nhap(int a[][100], int& m, int& n, int& d)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap dong: ";
    cin >> d;
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
            cout << fixed << setw(8) << setprecision(5) << a[i][j];
        cout << endl;
    }
}
int ktHoanThien(int n)
{
    int t = n;
    int flag = 1;
    int dn = 0;
    while (t != 0)
    {
        dn = dn * 10 + t % 10;
        t /= 10;
    }
    if (dn == n)
        flag = 1;
    else 
        flag = 0;
    return flag;
}
int DemHoanThien(int a[][100], int m, int n, int d)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (ktHoanThien(a[i][j]) == 1)
                dem++;
    return dem;
}