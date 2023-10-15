#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
float DuongDau(float[][100], int, int);
float DuongNhoNhat(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "So thuc duong nho nhat trong ma tran la: " << DuongNhoNhat(a, m, n);
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
float DuongDau(float a[][100], int m, int n)
{
	float lc;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				return a[i][j];
}
float DuongNhoNhat(float a[][100], int m, int n)
{
	float lc = DuongDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				if (a[i][j] < lc)
					lc = a[i][j];
	return lc;
}