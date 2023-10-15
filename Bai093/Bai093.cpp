#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
int DemDong(int[][50], int, int, int);
int DemLonNhat(int[][50], int, int);
void LietKe(int[][50], int, int);
int main()
{
	int a[50][50];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
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
int DemDong(int a[][50], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
	{
		int uoc = 0;
		for (int k = 1; k <= a[d][j]; k++)
			if (a[d][j] % k == 0)
				uoc++;
		if (uoc == 2)
			dem++;
	}
	return dem;
}
int DemLonNhat(int a[][50], int m, int n)
{
	int lc = 0;
	for (int i = 1; i < m; i++)
		if (DemDong(a, m, n, i) > DemDong(a, m, n, lc))
			lc = i;
	return lc;
}
void LietKe(int a[][50], int m, int n)
{
	int d = DemLonNhat(a, m, n);
	for (int j = 0; j < n; j++)
		cout << setw(4) << a[d][j];
}