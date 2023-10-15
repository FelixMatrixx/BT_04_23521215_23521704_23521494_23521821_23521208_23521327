#include<iostream>

using namespace std;
void Nhap(float[][50], int&, int&);
int DemAm(float[][50], int, int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	int c;
	cin >> c;
	int dem = DemAm(a, m, n, c);
	cout << dem;
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
int DemAm(float a[][50], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (a[i][c] < 0)
			dem++;
	return dem;
}