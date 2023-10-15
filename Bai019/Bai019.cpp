#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
void Xuat(int[][100], int, int);
int ktDoiXung(int);
void LietKe(int[][100], int, int, int);

int main()
{
    int b[100][100];
    int k, l;
    int c;
    Nhap(b, k, l, c);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    LietKe(b, k, l, c);
    return 0;
}
void Nhap(int a[][100], int& m, int& n, int& c)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap c: ";
    cin >> c;
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
int ktDoiXung(int n)
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
void LietKe(int a[][100], int m, int n, int c)
{
    cout << "Cac chu so doi xung cua cot "<< c << ": ";
    for (int i = 0; i < m; i++)
        if (ktDoiXung(a[i][c]))
            cout << fixed << setw(8) << setprecision(3) << a[i][c];
}