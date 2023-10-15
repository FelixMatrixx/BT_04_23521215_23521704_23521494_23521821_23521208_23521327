#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void XuatA(float[][100], int, int);
void XuatB(float[][100], int, int);
void DichXuongCot(float[][100], int, int, int);
void DichXuong(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	XuatA(a, m, n);
	DichXuong(a, m, n);
	XuatB(a, m, n);
}
void Nhap(float a[][100], int& m, int& n)
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
void DichXuongCot(float a[][100],
	int m, int n, int c)
{
	float temp = a[m - 1][c];
	for (int i = m - 1; i >= 1; i--)
		a[i][c] = a[i - 1][c];
	a[0][c] = temp;
}
void DichXuong(float a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		DichXuongCot(a, m, n, j);
}
void XuatA(float a[][100], int m, int n)
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
void XuatB(float a[][100], int m, int n)
{
	cout << "\nMa tran duoc dich xuong =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
	}
}