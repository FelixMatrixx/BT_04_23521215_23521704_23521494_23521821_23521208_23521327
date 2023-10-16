#include <iostream>
using namespace std;
void Nhap(int[][100], int&, int&);
int ChanDau(int[][100], int, int);
int ChanNhoNhat(int [][100], int , int);
int DemChanNhoNhat(int[][100], int, int);
void Xuat(int);
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(DemChanNhoNhat(a, m, n));
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
int ChanDau(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j]>=0&& (a[i][j]%2==0))
			{
				return a[i][j];
				break;
			}
	}
}
int ChanNhoNhat(int a[][100], int m, int n)
{
	int lc = ChanDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((a[i][j] >= 0) && (a[i][j] % 2 == 0) && (a[i][j] < lc))
				lc = a[i][j];
	return lc;
}
int DemChanNhoNhat(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == ChanNhoNhat(a, m, n))
				dem++;
	return dem;
}
void Xuat(int n)
{
	cout << "So luong gia tri chan nho nhat trong mang: " << n;
}