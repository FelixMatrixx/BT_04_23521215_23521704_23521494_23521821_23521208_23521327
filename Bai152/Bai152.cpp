#include<iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
float TichDong(float[][100], int, int, int);
void ThemCot(float [][100], int , int &);
void Xuat(float [][100], int, int &);
int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(float a[][100], int& m, int& n)
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
float TichDong(float a[][100], int m, int n, int dong)
{
	float S = 1;
	for (int j = 0; j < n; j++)
		S = S * a[dong][j];
	return S;
}
void ThemCot(float a[][100], int m, int &n)
{
	for (int i = 0; i < m; i++)
	{
		a[i][n] = TichDong(a, m, n, i);
	}
	n++;
}
void Xuat(float a[][100], int m, int &n)
{
	ThemCot(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(4);
		cout << endl;
	}
}