#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
float Tongduong(float[][50], int, int);
int main()
{
	int k, l;// k la hang , l la cot
	float a[50][50];
	Nhap(a, k, l);
	cout << fixed << setprecision(2) << Tongduong(a, k, l);
	return 0;
}
void Nhap(float  a[][50], int& m, int& n)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
float Tongduong(float a[][50], int m, int n)
{
	float Tong = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				Tong = Tong + a[i][j];
		}
	}
	return Tong;
}