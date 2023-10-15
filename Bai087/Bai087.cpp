#include<iostream>

using namespace std;
void Nhap(float[][50], int&, int&);
int TanSuat(float[][50], int, int, int);
float TimGiaTri(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	float x = TimGiaTri(a, m, n);
	cout << x;
	return 0;
}
void Nhap(float a[][50], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int TanSuat(float a[][50], int m, int n, int x)
{
	int dem = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x)
				dem++;
	return dem;
}
float TimGiaTri(float a[][50], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) > TanSuat(a, m, n, lc))
				lc = a[i][j];
	return lc;
}