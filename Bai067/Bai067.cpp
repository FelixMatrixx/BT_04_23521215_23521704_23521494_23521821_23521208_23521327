#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktChinhPhuong(int);
int DemChinhPhuongBien(int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    int kq = DemChinhPhuongBien(b, k, l);
    cout << "So luong so chinh phuong tren bien: " << kq;
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
int ktChinhPhuong(int n)
{
    int flag = 0;
    for (int i = 0; i * i <= n; i++)
        if (i * i == n)
            flag = 1;
    return flag;
}
int DemChinhPhuongBien(int a[][100], int m, int n)
{
    int dem = 0;
    //Hang dau
    for (int j = 0; j <= n - 2; j++)
        if (ktChinhPhuong(a[0][j]) == 1)
            dem++;
    // Cot cuoi
    for (int i = 0; i <= m - 2; i++)
        if (ktChinhPhuong(a[i][n - 1]) == 1)
            dem++;
    //Hang cuoi
    for (int j = n - 1; j >= 1; j--)
        if (ktChinhPhuong(a[m - 1][j]) == 1)
            dem++;
    //Cot dau
    for (int i = m - 1; i >= 1; i--)
        if (ktChinhPhuong(a[i][0]) == 1)
            dem++;
    return dem;
}