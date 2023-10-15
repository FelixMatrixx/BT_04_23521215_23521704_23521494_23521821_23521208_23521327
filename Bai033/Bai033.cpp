#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
int TongDong(int[][50], int, int, int);
int main()
{
	int a[50][50];
	int m, n;
	Nhap(a, m, n);
	int d;
	cin >> d;
	int s = TongDong(a, m, n, d);
	cout << s;
	return 0;
}
void Nhap(int a[][50], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int TongDong(int a[][50], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			s += a[d][j];
	return s;
}