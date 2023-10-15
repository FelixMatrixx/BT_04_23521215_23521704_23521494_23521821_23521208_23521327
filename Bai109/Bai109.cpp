#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktDong(float[][100], int, int);
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
int ktDong(float a[][100], int n, int d)
{
    int flag = 1;
    for (int j = 0; j < n; j++)
        if (a[d][j] > 0)
            flag = 0;
    return flag;
}
void LietKe(float a[][100], int m, int n)
{
    cout << "\nCac dong chua cac gia tri am: ";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (ktDong(a, n, i) == 1)
                cout << fixed << setw(8) << setprecision(3) << i;   
}