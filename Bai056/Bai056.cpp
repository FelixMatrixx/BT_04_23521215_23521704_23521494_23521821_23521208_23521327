#include <iostream>
using namespace std;
void Nhap(int[][100], int&, int&);
bool ktHoanThien(int);
int DemHoanThien(int[][100], int, int);
void Xuat(int);
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(DemHoanThien(a, m, n));
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
bool ktHoanThien(int n)
{
	if (n < 1)
		return false;
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			s = s + i;
	return (s == n);
}
int DemHoanThien(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktHoanThien(a[i][j]))
				dem++;
	return dem;
}
void Xuat(int dem)
{
	cout << "So luong so hoan thien la: " << dem;
}