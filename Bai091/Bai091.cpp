#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongCot(float[][100], int, int);
float TongCotNhoNhat(float[][100], int, int);
void LietKe(float[][100], int, int);

int main()
{
    float b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    LietKe(b, k, l);
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
float TongCot(float a[][100], int m, int c)
{
    float s = 0;
    for (int i = 0; i < m; i++)
        s += a[i][c];
    return s;
}
float TongCotNhoNhat(float a[][100], int m, int n)
{
    float smin = TongCot(a, m, 0);
    for (int j = 0; j < n; j++)
        if (TongCot(a, m, j) < smin)
            smin = TongCot(a, m, j);
    return smin;

}
void LietKe(float a[][100], int m, int n)
{
    float smin = TongCotNhoNhat(a, m, n);
    cout << "\nCac cot co tong cot nho nhat: ";
    for (int j = 0; j < n; j++)
        if (TongCot(a, m, j) == smin)
            cout << fixed << setw(8) << setprecision(3) << j;

}