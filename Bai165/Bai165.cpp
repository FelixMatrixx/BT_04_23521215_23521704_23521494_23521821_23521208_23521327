#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void DaoCot(float[][50], int, int, int);
void ChieuGuongNgang(float[][50], int, int);
void Xuat(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	ChieuGuongNgang(a, n, m);
	Xuat(a, m, n);
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
void DaoCot(float a[][50], int m, int n, int c)
{
	for (int i = 0; i < n / 2; i++)
	{
		float temp = a[i][c];
		a[i][c] = a[n - 1 - i][c];
		a[n - 1 - i][c] = temp;
	}
}
void ChieuGuongNgang(float a[][50], int m, int n)
{
	for (int j = 0; j < n; j++)
		DaoCot(a, m, n, j);
}
void Xuat(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}