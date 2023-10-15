#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "\nMa tran ban dau: \n";
    Xuat(b, k, l);
    LietKe(b, k, l);
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
void LietKe(int a[][100], int m, int n)
{
    cout << "Cac chu so chan co trong ma tran: ";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] % 2 == 0)
                cout << fixed << setw(8) << setprecision(3) << a[i][j];
}