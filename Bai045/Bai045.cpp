#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
float TongDuong(float[][50], int, int);
int DemDuong(float[][50], int, int);
float TbcDuong(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	float kq = TbcDuong(a, m, n);
	cout << kq;
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
float TongDuong(float a[][50], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				s += a[i][j];
	return s;
}
int DemDuong(float a[][50], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				dem++;
	return dem;
}
float TbcDuong(float a[][50], int m, int n)
{
	float s = TongDuong(a, m, n);
	int dem = DemDuong(a, m, n);
	float kq = s / dem;
	return kq;
}