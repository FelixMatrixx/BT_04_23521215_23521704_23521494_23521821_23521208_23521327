#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void XuatB(int[][100], int, int);
void XuatA(int[][100], int, int);
void Xoay90(int[][100], int&, int&);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	XuatA(a, m, n);
	Xoay90(a, m, n);
	XuatB(a, m, n);
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
void Xoay90(int a[][100], int& m, int& n)
{
	int b[100][100];
	int k, l;
	k = n;
	l = m;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = a[j][n - 1 - i];
	m = k;
	n = l;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
}
void XuatB(int a[][100], int m, int n)
{
	cout << "\nMa tran duoc xoay 90 thanh =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
	}
}
void XuatA(int a[][100], int m, int n)
{
	cout << "\nMa tran ban dau =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
	}
}