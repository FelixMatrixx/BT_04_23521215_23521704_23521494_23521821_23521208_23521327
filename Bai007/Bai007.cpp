#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void Nhap(string, int[][100], int&, int&);
void Xuat(int[][100], int, int);

int main()
{
    int b[100][100];
    int k, l;
    Nhap("intdata01.inp", b, k, l);
    cout << "\nMa tran ban dau: ";
    Xuat(b, k, l);
    return 0;
}
void Nhap(string filename, int a[][100], int& m, int& n)
{
    ifstream fi(filename);
    fi >> m;
    fi >> n;
    for (int i = 0; i <= m - 1; i++)
        for (int j = 0; j <= n - 1; j++)
            fi >> a[i][j];
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
