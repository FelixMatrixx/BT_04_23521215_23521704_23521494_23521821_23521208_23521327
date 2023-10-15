#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[][50], int&, int&);
int Tongchan(int [][50], int, int);
int main()
{
	int  k, l;
	int a[50][50];
	Nhap(a, k, l);
	cout <<Tongchan(a, k, l);
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
int Tongchan(int a[][50], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				s = s + a[i][j];
	}
	return s;
}