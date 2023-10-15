#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&, int&);
int Demduongdong(float[][50], int, int, int);
int main()
{
	int  k, l, d;
	float a[50][50];
	Nhap(a, k, l, d);
	cout << "so duong tren hang " << d << " la " << Demduongdong(a, k, l, d);
	return 0;
}
void Nhap(float  a[][50], int& m, int& n, int& d)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	cout << "Nhap dong ";
	cin >> d;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
int Demduongdong(float a[][50], int m, int n, int d)
{
	int count = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] > 0)
			count++;
	return count;
}