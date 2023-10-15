#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
void Saptang(float[][50], int, int , int );
void Hoanvi(float&, float&);
void Sapgiam(float[][50], int, int , int);
void Sapxep(float[][50], int, int);
void Xuat(float[][50], int, int);
int main()
{
	int k, l;
	float a[50][50];
	Nhap(a, k, l);
	Sapxep(a, k, l);
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
void Hoanvi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void Saptang(float a[][50], int m, int n, int k)
{

	for (int j = 0; j < n - 1; j++)
	{
		for (int j1 = j + 1; j1 < n; j1++)
			if ((a[k][j1]) < a[k][j])
				Hoanvi(a[k][j], a[k][j1]);
	}
}
void Sapgiam(float a[][50], int m, int n, int k)
{

	for (int j = 0; j < n - 1; j++)
	{
		for (int j1 = j + 1; j1 < n; j1++)
			if ((a[k][j1]) > a[k][j])
				Hoanvi(a[k][j], a[k][j1]);
	}
}
void Sapxep(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 0)
			Saptang(a, m, n, i);
		if (i % 2 != 0)
			Sapgiam(a, m, n, i);
	}
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