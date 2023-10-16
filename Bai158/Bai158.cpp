#include<iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void DichPhaiDong(float [][100], int , int , int );
void DichPhai(float[][100], int, int);
void Xuat(float[][100], int m, int n);
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
void DichPhaiDong(float a[][100], int m, int n, int dong)
{
	float temp = a[dong][n - 1];
	for (int j = n - 1; j >= 1; j--)
		a[dong][j] = a[dong][j - 1];
	a[dong][0] = temp;
}
void DichPhai(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		DichPhaiDong(a, m, n, i);
}
void Xuat(float a[][100], int m, int n)
{
	DichPhai(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(8);
		cout << endl;
	}
}