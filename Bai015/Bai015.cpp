#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
void LietKe(int[][50], int, int, int);
int main()
{
	int a[50][50];
	int m, n;
	Nhap(a, m, n);
	int d;
	cin >> d;
	LietKe(a, m, n, d);
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
void LietKe(int a[][50], int m, int n, int d)
{
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			cout << setw(4) << a[d][j];
}