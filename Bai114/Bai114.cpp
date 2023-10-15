#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[][50], int&, int&);
bool Ktrachinhphuong(int);
bool Tontaicot(int[][50], int, int, int);
void Lietke(int[][50], int, int);
int main()
{
	int k, l;
	int a[50][50];
	Nhap(a, k, l);
	cout << "Cac cot co chua so chinh phuong la ";
	Lietke(a, k, l);
	return 0;
}
void Nhap(int  a[][50], int& m, int& n)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
bool Ktrachinhphuong(int n)
{
	for (int i = 1; i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
bool Tontaicot(int a[][50], int m, int n, int c)
{
	for (int i = 0; i < m; i++)
		if (Ktrachinhphuong(a[i][c]))
			return true;
	return false;
}
void Lietke(int a[][50], int m, int n)
{
	for (int j = 0; j < n; j++)
		if (Tontaicot(a, m, n, j))
			cout << setw(4) << j;
	
}