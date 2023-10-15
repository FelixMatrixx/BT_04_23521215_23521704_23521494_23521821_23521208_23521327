#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[][50], int&, int&);
bool Ktrachinhphuong(int);
int Tongbien(int[][50], int, int);
int main()
{
	int k, l;
	int a[50][50];
	Nhap(a, k, l);
	cout << Tongbien(a, k, l);
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
	{
		if (i * i == n)
			return true;
	}
	return false;
}
int Tongbien(int a[][50], int m, int n)
{
	int s = 0;
	for (int j = 1; j < n - 1; j++) // tinh hang 0 , cot 1 den cot n-2
	{
		if (Ktrachinhphuong(a[0][j]))
		
			s = s + a[0][j];
		
	}
	for (int i = 0; i < m; i++) // tin cot 0 , hang 0 den hang m-1
	{
		if (Ktrachinhphuong(a[i][0]))
			s += a[i][0];
	}
	for (int j = 1; j < n - 1; j++)
	{
		if (Ktrachinhphuong(a[m - 1][j]))
			s = s + a[m - 1][j];
	}
	for (int i = 0; i < m; i++)
	{
		if (Ktrachinhphuong(a[i][n - 1]))
			s = s + a[i][n - 1];
	}
	return s;
}