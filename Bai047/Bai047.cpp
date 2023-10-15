#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
float TongBien(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Tong cac gia tri o bien: " << TongBien(a, m, n);
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
float TongBien(float a[][100], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (i == 0 || i == (m - 1) || j == 0 || j == (n - 1))
				s = s + a[i][j];
	return s;
}