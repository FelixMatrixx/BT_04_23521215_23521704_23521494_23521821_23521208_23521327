#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
int TongCacSoLe(int[][500], int, int, int);

int main()
{
    int b[500][500];
    int k, l;
    Nhap(b, k, l);
    cout << "Ma tran da nhap la: \n";
    Xuat(b, k, l);
    int c;
    cout << "Chon cot cac tinh toan: ";
    cin >> c;
    cout << "Tong cac so le tren cot la: " << TongCacSoLe(b, k, l, c);
    return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << setprecision(5);
			cout << a[i][j];
		}
		cout << "\n";
	}
}

int TongCacSoLe(int a[][500], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		if (a[i][c] % 2 != 0)
			s = s + a[i][c];
	return s;
}