#include<iostream>

using namespace std;
void Nhap(int[][50], int&, int&);
int DemToanChan(int[][50], int, int);
int main()
{
	int a[50][50];
	int m, n;
	Nhap(a, m, n);
	int dem = DemToanChan(a, m, n);
	cout << dem;
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
int DemToanChan(int a[][50], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			int flag = 1;
			int t = a[i][j];
			while (t > 0)
			{
				int dv = t % 10;
				if (dv % 2 != 0)
					flag = 0;
				t /= 10;
			}
			if (flag == 1)
				dem++;
		}
	return dem;
}
