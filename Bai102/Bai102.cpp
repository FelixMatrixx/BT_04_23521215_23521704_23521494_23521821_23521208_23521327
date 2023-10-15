#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int [][50], int&, int&);
bool Tontaile(int[][50], int, int);
int main()
{
	int k, l;
	int a[50][50];
	Nhap(a, k, l);
	if (Tontaile(a, k, l))
		cout << "Ton tai ";
	else
		cout << "Khong ton tai ";
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
bool Tontaile(int a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				return true;
	return false;
}