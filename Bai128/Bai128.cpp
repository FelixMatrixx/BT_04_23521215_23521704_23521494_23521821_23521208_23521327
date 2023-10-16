#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void HoanVi(float&, float&);
void HoanViDong(float[][100], int, int, int, int);
float TongDong(float[][100], int, int, int);
void SapTang(float[][100], int, int);
void Xuat(float[][100], int, int );
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
float TongDong(float a [][100], int m, int n, int dong)
{
	float S = 0;
	for (int j = 0; j < n; j++)
		S = S + a[dong][j];
	return S;
}
void HoanVi(float &a, float&b)
{
	float temp = a;
	a = b;
	b = temp;
}
void HoanViDong(float a[][100], int m, int n, int d1, int d2)
{
	for (int j = 0; j <= n - 1; j++)
		HoanVi(a[d1][j], a[d2][j]);
}
void SapTang(float a[][100], int m, int n)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (TongDong(a, m, n, i) > TongDong(a, m, n, j))
				HoanViDong(a, m, n, i, j);
}
void Xuat(float a[][100], int m, int n)
{
	SapTang(a, m, n);
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(8);
		cout << endl;
	}
}