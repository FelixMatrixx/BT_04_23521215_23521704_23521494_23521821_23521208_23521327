#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void BienDoi(float[][50], int, int);
void Xuat(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	BienDoi(a, m, n);
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
void BienDoi(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				a[i][j] = abs(a[i][j]);
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