#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void DaoDong(float[][100], int, int, int);
void ChieuGuongDoc(float[][100], int, int);
void Xuat(float[][100], int, int);
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
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
void DaoDong(float a[][100], int m, int n, int dong)
{
	int dd = 0;
	int cc = n - 1;
	while (dd < cc)
	{
		float temp = a[dong][dd];
		a[dong][dd] = a[dong][cc];
		a[dong][cc] = a[dong][dd];
		dd++;
		cc--;
	}
}
void ChieuGuongDoc(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		DaoDong(a, m, n, i);
}
void Xuat(float a[][100], int m, int n)
{
	ChieuGuongDoc(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(8);
		cout << endl;
	}
}