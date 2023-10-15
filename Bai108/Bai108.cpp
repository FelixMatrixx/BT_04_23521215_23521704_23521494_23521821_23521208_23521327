#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[][50], int&, int&);
bool Tontaidongchan(int[][50], int, int , int);
void Lietke(int[][50], int, int);
int main()
{
	int k, l;
	int a[50][50];
	Nhap(a, k, l);
	cout << "Cac dong co chua gia tri chan la ";
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
bool Tontaidongchan(int a[][50], int m, int n, int d)
{
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			return true;
	return false;
}
void Lietke(int a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (Tontaidongchan(a, m, n, i))
			cout << setw(4) << i;
}