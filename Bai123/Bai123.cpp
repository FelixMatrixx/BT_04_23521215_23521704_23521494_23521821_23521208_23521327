#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void HoanVi(float&, float&);
void SapDongGiam(float[][50], int, int, int);
void Xuat(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	int d;
	cin >> d;
	SapDongGiam(a, m, n, d);
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
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void SapDongGiam(float a[][50], int m, int n, int d)
{
	int lc = a[d][0];
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (a[d][j] < a[d][j + 1])
				HoanVi(a[d][j], a[d][j + 1]);
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