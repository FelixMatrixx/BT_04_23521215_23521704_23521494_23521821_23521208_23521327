#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
int TongNguyenTo(int[][50], int, int);
int main()
{
	int a[50][50];
	int m, n;
	Nhap(a, m, n);
	int s = TongNguyenTo(a, m, n);
	cout << s;
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
int TongNguyenTo(int a[][50], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			int dem = 0;
			for (int k = 1; k <= a[i][j]; k++)
				if (a[i][j] % k == 0)
					dem++;
			if (dem == 2)
				s += a[i][j];
		}
	return s;
}