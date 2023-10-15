#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[][50], int&, int&, int&);
bool Kiemtra(int);//kiem tra dang 2^m
int Tong(int[][50], int, int, int); // tinh tong 2^m
int main()
{
	int   k, l, c;
	int n = 1;
	int a[50][50];
	Nhap(a, k, l, c);
	cout << "Tong la " << Tong(a, k, l, c);
	return 0;
}
void Nhap(int  a[][50], int& m, int& n, int& c)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	cout << "Nhap cot ";
	cin >> c;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
bool Kiemtra(int n)
{
	if (n < 1)
		return false;
	if (n > 0)
	{
		int t = n;
		while (t != 0)
		{
			if (t % 2 != 0 and t>1)
				return false;
			t = t / 2;
		}
		return true;
	}
}
int Tong(int a[][50], int m, int n, int c)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		if (Kiemtra(a[i][c]))
			s = s + a[i][c];
	}
	return s;
}