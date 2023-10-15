#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TichLe(int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    int tich = TichLe(b, k, l);
    cout << "Tich cac so le tren hang chan: " << tich;
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
            cout << fixed << setw(8) << setprecision(5) << a[i][j];
        cout << endl;
    }
}
int TichLe(int a[][100], int m, int n)
{
    int tich = 1;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (i % 2 == 0 && a[i][j] % 2 != 0)
                tich *= a[i][j];
    return tich;
}