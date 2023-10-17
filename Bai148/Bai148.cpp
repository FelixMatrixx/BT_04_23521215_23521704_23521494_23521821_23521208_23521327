#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void ThemCot(int[][500], int, int&, int);

int main()
{
	int b[50][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran da nhap la: \n";
	Xuat(b, k, l);
	int c;
	cout << "Nhap cot can them: ";
	cin >> c;
	ThemCot(b, k, l, c);
	Xuat(b, k, l);
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

void ThemCot(int a[][500], int m, int& n, int c)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = n; j >= c + 1; j--)
			a[i][j] = a[i][j - 1];
		a[i][c] = 0;
	}
	n++;
}