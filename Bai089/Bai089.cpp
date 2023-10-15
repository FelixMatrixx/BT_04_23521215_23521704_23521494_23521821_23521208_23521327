#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
float TongCot(float[][100], int, int, int);
float TongNhoNhat(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	cout << "Tong cot nho nhat: " << TongNhoNhat(a, m, n);
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
float TongCot(float a[][100], int m, int n, int d)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		s += a[i][d];
	return s;
}
float TongNhoNhat(float a[][100], int m, int n)
{
	float lc = TongCot(a, m, n, 0);
	for (int j = 1; j < n; j++)
	{
		int d = j;
		if (TongCot(a, m, n, d) < lc)
			lc = TongCot(a, m, n, d);
	}
	return lc;
}