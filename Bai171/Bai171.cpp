#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void TimConToanDuong(float[][50], int, int, int&, int&, int&, int&);
void Xuat(float[][50], int, int, int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	int mm, nn, h, l;
	TimConToanDuong(a, m, n, mm, nn, h, l);
	Xuat(a, mm, nn, h, l);
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
void TimConToanDuong(float a[][50], int m, int n, int& mm, int& nn, int& h, int& l)
{
	for (int hh = m; hh > 0; hh--)
		for (int ll = n; ll > 0; ll--)
			for (int i = 0; i <= m - hh; i++)
				for (int j = 0; j <= n - ll; h++)
				{
					int flag = 1;
					for (int hang = 0; hang < hh; hang++)
						for (int cot = 0; cot < ll; cot++)
							if (a[hang + i][cot + j] <= 0)
								flag = 0;
					if (flag == 1)
					{
						mm = i;
						nn = j;
						l = ll;
						h = hh;
						return;
					}
				}
}
void Xuat(float a[][50], int mm, int nn, int h, int l)
{
	for (int i = mm; i < mm + h; i++)
	{
		for (int j = nn; j < nn + l; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}