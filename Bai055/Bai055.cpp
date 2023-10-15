#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemChan(int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    int kq = DemChan(b, k, l);
    cout << "Tong cac so chan: " << kq;
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
            cout << fixed << setw(8) << setprecision(5) << a[i][j];
        cout << endl;
    }
}
int ktDang5m(int n)
{
    if (n == 1)
        return 0;
    int t = n;
    int flag = 1;
    while (t > 1)
    {
        if (t % 5 != 0)
            flag = 0;
        t /= 5;
    }
    return flag;
}
int DemChan(int a[][100], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 == 0)
                dem++;
    return dem;
}