#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&, int&);
void Xuat(float[][100], int, int);
float TongDuong(float[][100], int, int, int);

int main()
{
    float b[100][100];
    int k, l;
    int d;
    Nhap(b, k, l, d);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    float kq = TongDuong(b, k, l, d);
    cout << "Tong cac gia tri duong tren dong: " << kq;
    return 0;
}
void Nhap(float a[][100], int& m, int& n, int& d)
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
void Xuat(float a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << fixed << setw(8) << setprecision(3) << a[i][j];
        cout << endl;
    }
}
float TongDuong(float a[][100], int m, int n, int d)
{
    float s = 0;
    for (int j = 0; j < n; j++)
            if (a[d][j] > 0)
                s += a[d][j];
    return s;
}