#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktNguyenTo(int);
bool ktChinhPhuong(int);
int ktDong(int[][100], int, int, int);
void XoaDong(int[][100], int&, int, int);
void XoaDong(int[][100], int&, int);

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	XoaDong(a, m, n);
	Xuat(a, m, n);
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
int ktDong(int a[][100], int m, int n, int d)
{
	int flag1 = 0;
	int flag2 = 0;
	for (int j = 0; j < n; j++)
	{
		if (ktNguyenTo(a[d][j]))
			flag1 = 1;
		if (ktChinhPhuong(a[d][j]))
			flag2 = 1;
	}
	return flag1 * flag2;
}
void XoaDong(int a[][100], int& m, int n, int d)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = d; i <= m - 2; i++)
			a[i][j] = a[i + 1][j];
	}
	m--;
}
void XoaDong(int a[][100], int& m, int n)
{
	for (int i = m - 1; i >= 0; i--)
		if (ktDong(a, m, n, i) == 1)
			XoaDong(a, m, n, i);
}
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
bool ktChinhPhuong(int k)
{
	bool flag = false;
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			flag = true;
	return flag;
}
void Xuat(int b[][100], int m, int n)
{
	cout << "Ma tran A =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << b[i][j];
		}
	}
}