#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
int Tong(int[][100], int, int, int);
bool ktChinhPhuong(int[][100], int, int, int, int);

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n, d);
	cout << "Tong cac so chinh phuong: " << Tong(a, m, n, d);
	return 0;
}
void Nhap(int a[][100], int& m, int& n, int& d)
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
	cout << "Nhap chi so (index) cua cot muon tinh tong cac so chinh phuong: ";
	cin >> d;
}
bool ktChinhPhuong(int a[][100], int i, int j, int m, int n)
{
	for (int k = 0; k <= m * n; k++)
		if (k * k == a[i][j])
			return true;
	return false;
}
int Tong(int a[][100], int m, int n, int d)
{
	int s = 0;
	int j = d;
	for (int i = 0; i < m; i++)
		if (ktChinhPhuong(a, i, j, m, n))
			s += a[i][j];
	return s;
}