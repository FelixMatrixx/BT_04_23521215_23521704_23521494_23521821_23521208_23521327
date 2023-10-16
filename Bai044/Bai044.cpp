#include <iostream>
using namespace std;
void Nhap(float[][100], int&, int&);
float Tich(float[][100], int, int);
void Xuat(float);
int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(Tich(a, m, n));
	return 0;
}
void Nhap(float a[][100], int &m, int &n)
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
float Tich(float a[][100], int m, int n)
{
	int c;
	cout << "Nhap chi so cot: ";
	cin >> c;
	float T = 1;
	for (int i = 0; i < m; i++)
		if ((-1 <= a[i][c]) && (a[i][c] <= 0))
			T = T * a[i][c];
	return T;
}
void Xuat(float n)
{
	cout << "Tich la: " << n;
}
