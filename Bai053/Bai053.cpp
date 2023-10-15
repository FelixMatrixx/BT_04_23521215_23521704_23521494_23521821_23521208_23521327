#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
int DemChinhPhuong(int[][100], int, int);
bool ktChinhPhuong(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Tong cac so chinh phuong: " << DemChinhPhuong(a, m, n);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}
bool ktChinhPhuong(int a[][100], int i, int j)
{
	for (int k = 0; k <= a[i][j]; k++)
		if (k * k == a[i][j])
			return true;
	return false;
}
int DemChinhPhuong(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktChinhPhuong(a, i, j))
				dem = dem + 1;
	return dem;
}