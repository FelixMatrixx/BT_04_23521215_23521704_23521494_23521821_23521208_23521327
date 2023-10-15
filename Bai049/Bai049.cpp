#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktDang5m(int);
int Tong5m(int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    int kq = Tong5m(b, k, l);
    cout << "Tong cac so co dang 5m tren bien: " << kq;
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
int Tong5m(int a[][100], int m, int n)
{
    int s = 0;
    //Hang dau
    for (int j = 0; j <= n - 2; j++)
        if (ktDang5m(a[0][j]) == 1)
            s += a[0][j];
    // Cot cuoi
    for (int i = 0; i <= m - 2; i++)
        if (ktDang5m(a[i][n - 1]) == 1)
            s += a[i][n - 1];
    //Hang cuoi
    for (int j = n - 1; j >= 1; j--)
        if (ktDang5m(a[m - 1][j]) == 1)
            s += a[m - 1][j];
    //Cot dau
    for (int i = m - 1; i >= 1; i--)
        if (ktDang5m(a[i][0]) == 1)
            s += a[i][0];
    return s;
}