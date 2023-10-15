#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongCot(float[][100], int, int);
void ThemDong(float[][100], int&, int);

int main()
{
    float b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    ThemDong(b, k, l);
    cout << "\nMa tran luc sau: \n";
    Xuat(b, k, l);
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
float LonNhat(float a[][100], int m, int n)
{
    float max = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > max)
                max = a[i][j];
    return max;
}
float TongCot(float a[][100], int m, int c)
{
    float s = 0;
    for (int i = 0; i < m; i++)
        s += a[i][c];
    return s;
}
void ThemDong(float a[][100], int& m, int n)
{
    for (int j = 0; j < n; j++)
        a[m][j] = TongCot(a, m, j);
    m++;
}