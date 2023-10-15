#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool ktGiam(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	if (ktGiam(a, m, n))
		cout << "\nGiam";
	else
		cout << "\nKhong";
	return 0;
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
bool ktGiam(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > a[i][j + 1])
				continue;
			else
				return false;
		}
	for (int j = 0; j < n; j++)
		for (int i = 0; i < m; i++)
		{
			if (a[i][j] > a[i + 1][j])
				continue;
			else
				return false;
		}
	return true;
}
bool ktGiamHang(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > a[i][j + 1])
				continue;
			else
				return false;
		}
	for (int j = 0; j < n; j++)
		for (int i = 0; i < m; i++)
		{
			if (a[i][j] > a[i + 1][j])
				continue;
			else
				return false;
		}
	return true;
}
void Xuat(float a[][100], int m, int n)
{
	cout << "Ma tran A =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
	}
}