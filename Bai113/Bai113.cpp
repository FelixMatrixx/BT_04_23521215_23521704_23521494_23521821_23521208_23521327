#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktDong(int[][100], int, int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	LietKe(a, m, n);
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
	int flag;
	for (int j = 0; j < n; j++)
	{
		flag = 0;
		if (a[d][j] % 2 == 0)
			flag = 1;
		else
			return flag;

	}
	return flag;
}
void LietKe(int a[][100], int m, int n)
{
	cout << "\n\nChi so cua dong toan chan: ";
	for (int i = 0; i < m; i++)
	{
		int d = i;
		if (ktDong(a, m, n, d) == 1)
			cout << setw(5) << i;
	}
}
void Xuat(int a[][100], int m, int n)
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