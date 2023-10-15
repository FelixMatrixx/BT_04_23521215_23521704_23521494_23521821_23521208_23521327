#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktHoanThien(int);
bool TonTaiHoanThien(int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    bool kq = TonTaiHoanThien(b, k, l);
    if (kq)
        cout << "Ton tai hoan thien.";
    else
        cout << "Ko ton tai hoan thien.";
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
bool ktHoanThien(int n)
{
    int t = n;
    int s = 0;
    bool flag = true;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            s += i;
    if (s == n)
        flag = true;
    else
        flag = false;
    return flag;
}
bool TonTaiHoanThien(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (ktHoanThien(a[i][j]) == 1)
                return true;
    return false;
}