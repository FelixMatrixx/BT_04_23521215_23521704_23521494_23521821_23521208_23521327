#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
bool Ktracot(float[][50], int, int ,int );
void Xoacot(float[][50], int, int&, int);
void Xoanhieucot(float[][50], int, int&);
void Xuat(float[][50], int, int);
int main()
{
	int k, l;
	float a[50][50];
	Nhap(a, k, l);
	Xoanhieucot(a, k, l);
	Xuat(a, k, l);
	return 0;
}
void Nhap(float  a[][50], int& m, int& n)
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
bool Ktracot(float a[][50], int m, int n, int c)
{
	float sodau = a[0][c];
	if (sodau > 0)
		for (int i = 0; i < m; i++)
		{
			if (a[i][c] < 0)
				return false;
		}
	 if ( sodau <0)
		for (int i = 0; i < m; i++)
		{
			if (a[i][c] > 0)
				return false;
	
		}
	return true;
}
void Xoacot(float a[][50], int m, int& n, int c)
{
	for (int i = 0; i < m; i++)
		for (int j = c; j < m - 1; j++)
			a[i][j] = a[i][j + 1];
	n--;
}
void Xoanhieucot(float a[][50], int m, int& n)
{
	for (int j = n-1; j >= 0 ; j--)
		if (Ktracot(a, m, n, j) == false)
			Xoacot(a, m, n, j);
}
void Xuat(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}