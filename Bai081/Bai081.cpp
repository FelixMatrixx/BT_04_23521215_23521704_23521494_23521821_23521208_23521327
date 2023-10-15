#include<iostream>

using namespace std;
void Nhap(float[][50], int&, int&);
float AmDau(float[][50], int, int);
float AmLonNhat(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	float aln = AmLonNhat(a, m, n);
	cout << aln;
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
float AmDau(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				return a[i][j];
	return 0;
}
float AmLonNhat(float a[][50], int m, int n)
{
	float lc = AmDau(a, m, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > lc && a[i][j] < 0)
				lc = a[i][j];
	return lc;
}