#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktChinhPhuong(int);
int ChinhPhuongLonNhat(int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    int kq = ChinhPhuongLonNhat(b, k, l);
    cout << "So chinh phuong lon nhat: " << kq;
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
int ktChinhPhuong(int n)
{
    int flag = 0;
    for (int i = 1; i * i <= n; i++)
        if (i * i == n)
            flag = 1;
    return flag;
}
int ChinhPhuongLonNhat(int a[][100], int m, int n)
{
    int max = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (ktChinhPhuong(a[i][j]) == 1 && a[i][j] > max)
                max = a[i][j];
    return max;

}