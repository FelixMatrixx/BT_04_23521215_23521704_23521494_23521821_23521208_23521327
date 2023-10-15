#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
float LonNhatCot(int[][100], int, int, int);
void ThemDong1(int[][100], int&, int);
void ThemDong2(int[][100], int&, int, int);

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	ThemDong1(a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}
float LonNhatCot(int a[][100], int m, int n, int c)
{
	int lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}
void ThemDong2(int a[][100], int& m, int n, int d)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = m; i >= d + 1; i--)
		{
			a[i][j] = a[i - 1][j];
		}
		a[d][j] = LonNhatCot(a, m, n, j);
	}
	m++;
}
void ThemDong1(int a[][100], int& m, int n)
{
	int i = m - 1;
	ThemDong2(a, m, n, i + 1);
}
void Xuat(int b[][100], int m, int n)
{
	cout << "Ma tran A =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << b[i][j];
		}
	}
}