#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
int Demphanbiet(float[][50], int, int);
int main()
{
	int k, l; // hang va cot
	float a[50][50];
	Nhap(a, k, l);
	cout << Demphanbiet(a, k, l);
	return 0;
}
void Nhap(float  a[][50], int& m, int& n)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
int Demphanbiet(float a[][50], int m, int n)
{
	int count  = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			bool flag = true;
			for (int i1 = 0; i1 < i; i1++) // kiem do cac phan tu trong mang o hang i1 ( voi i1 <i )
			{
				for (int j1 = 0; j1 < n; j1++)
					if (a[i1][j1] == a[i][j])
						flag = false;
			}
			for (int j2 = 0; j2 < j; j2++) // kiemdo cac phan tu trong mang o hang i1 = i , cot j2 se tien den j-1
				if (a[i][j2] == a[i][j])
					flag = false;
			if (flag)
				count++;

		}
	}
	return count;
}