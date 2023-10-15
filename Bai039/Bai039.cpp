#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
int TichCot(int[][50], int, int, int);
int main()
{
	int a[50][50];
	int m, n;
	Nhap(a, m, n);
	int c;
	cin >> c;
	int T = TichCot(a, m, n, c);
	cout << T;
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
int TichCot(int a[][50], int m, int n, int c)
{
	int T = 1;
	for (int i = 0; i < m; i++)
		if (a[i][c] % 2 == 0)
			T *= a[i][c];
	return T;
}