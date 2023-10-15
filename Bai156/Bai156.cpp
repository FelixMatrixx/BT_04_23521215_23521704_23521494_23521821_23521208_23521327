#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
void Dichhang(float[][50], int, int);
void Xuat(float[][50], int, int);
int main()
{
	int k, l;
	float a[50][50];
	Nhap(a, k, l);
	Dichhang(a, k, l);
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

void Dichhang(float a[][50], int m, int n)
{
	float b[100];
	int k = 0;
	for (int j = 0; j < n; j++)
		b[k++] = a[0][j]; 
	//tao mang b luu tru gia tri hang 0 cua mang a
	k = 0;
	for (int i = 0; i <= m - 2; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = a[i + 1][j];
	// dich hang tu 0 ---> m-2
	for (int j = 0; j < n; j++)
		a[m - 1][j] = b[k++];
	// hang m-1 duoc tinh bang cach lay ra tu mang b
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