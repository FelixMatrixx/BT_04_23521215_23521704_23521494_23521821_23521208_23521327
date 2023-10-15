#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void DichPhai(float[], int);
void DichPhaiBien(float[][50], int, int);
void Xuat(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	DichPhaiBien(a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(float a[][50], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void DichPhai(float a[], int n)
{
	float temp = a[n - 1];
	for (int i = n - 1; i > 0; i--)
		a[i] = a[i - 1];
	a[0] = temp;
}
void DichPhaiBien(float a[][50], int m, int n)
{
	float b[50];
	int k = 0;
	for (int j = 0; j < n - 1; j++)
		b[k++] = a[0][j];
	for (int i = 0; i < m - 1; i++)
		b[k++] = a[i][n - 1];
	for (int j = n - 1; j > 0; j--)
		b[k++] = a[m - 1][j];
	for (int i = m - 1; i > 0; i--)
		b[k++] = a[i][0];
	DichPhai(b, k);
	k = 0;
	for (int j = 0; j < n - 1; j++)
		a[0][j] = b[k++];
	for (int i = 0; i < m - 1; i++)
		a[i][n - 1] = b[k++];
	for (int j = n - 1; j > 0; j--)
		a[m - 1][j] = b[k++];
	for (int i = m - 1; i > 0; i--)
		a[i][0] = b[k++];
}
void Xuat(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}