#include<iostream>

using namespace std;
void Nhap(int[][50], int&, int&);
int ViTriLonNhat(int[], int);
int TimChuSo(int[][50], int, int);
int main()
{
	int a[50][50];
	int m, n;
	Nhap(a, m, n);
	int x = TimChuSo(a, m, n);
	cout << x;
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
int ViTriLonNhat(int a[], int m)
{
	int lc = 0;
	for (int i = 0; i < m; i++)
		if (a[i] > a[lc])
			lc = i;
	return lc;
}
int TimChuSo(int a[][50], int m, int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				dem[0]++;
			int t = abs(a[i][j]);
			while (t != 0)
			{
				int dv = t % 10;
				dem[dv]++;
				t = t / 10;
			}
		}
	return ViTriLonNhat(dem, 10);
}
