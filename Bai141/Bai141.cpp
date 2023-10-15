#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void XoaDong(float[][50], int&, int, int);
void Xuat(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	int d;
	cin >> d;
	XoaDong(a, m, n, d);
	Xuat(a, m, n);
	return 0;
}
void Nhap(float a[][50], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void XoaDong(float a[][50], int& m, int n, int d)
{
	for (int i = d; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = a[i + 1][j];
	m = m - 1;
}
void Xuat(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
}