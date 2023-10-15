#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool LonNhatHang(float[][100], int, int, int);
bool NhoNhatHang(float[][100], int, int, int);
bool LonNhatCot(float[][100], int, int, int);
bool NhoNhatCot(float[][100], int, int, int);
bool ktYenNgua(float[][100], int, int, int, int);
int DemYenNgua(float[][100], int, int);

int main()
{
    float b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    int kq = DemYenNgua(b, k, l);
    cout << "So yen ngua trong ma tran: " << kq;
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
            cout << fixed << setw(10) << setprecision(3) << a[i][j];
        cout << endl;
    }
}
bool LonNhatHang(float a[][100], int n, int h, int x)
{
    for (int j = 0; j < n; j++)
        if (a[h][j] > x)
            return false;
    return true;
}
bool NhoNhatHang(float a[][100], int n, int h, int x)
{
    for (int j = 0; j < n; j++)
        if (a[h][j] < x)
            return false;
    return true;
}
bool LonNhatCot(float a[][100], int m, int c, int x)
{
    for (int i = 0; i < m; i++)
        if (a[i][c] > x)
            return false;
    return true;
}
bool NhoNhatCot(float a[][100], int m, int c, int x)
{
    for (int i = 0; i < m; i++)
        if (a[i][c] < x)
            return false;
    return true;
}
bool ktYenNgua(float a[][100], int m, int n, int h, int c)
{
    float check = a[h][c];
    bool dk1 = LonNhatHang(a, n, h, check);
    bool dk2 = NhoNhatCot(a, m, c, check);
    bool dk3 = NhoNhatHang(a, n, h, check);
    bool dk4 = LonNhatCot(a, m, c, check);
    return ((dk1 && dk2) || (dk3 && dk4));
}
int DemYenNgua(float a[][100], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n; j++)
        {
            float check = a[i][j];
            if (ktYenNgua(a, m, n, i, j))
                dem++;
        }
    return dem;
}