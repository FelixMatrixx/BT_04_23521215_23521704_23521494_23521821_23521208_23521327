#include <iostream>
using namespace std;
void Nhap(int[][100], int&, int&);
int DemChuSo(int);
int DemSoChuSo(int[][100], int, int);
void Xuat(int);
int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(DemSoChuSo(a, m, n));
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
int DemChuSo(int n)
{
	int dem = 0;
	for (int t = abs(n); t != 0; t = t / 10)
		dem++;
	return dem;
}
int DemSoChuSo(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			int D = DemChuSo(a[i][j]);
			dem = dem + D;
		}
	return dem;

}
void Xuat(int dem)
{
	cout << "So luong so chu so la: " << dem;
}
