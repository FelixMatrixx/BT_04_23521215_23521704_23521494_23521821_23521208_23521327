#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int& );
float Tongdong(float[][50], int, int , int );
float Tonglonnhat(float[][50], int, int);
void Lietke(float[][50], int, int);
int main()
{
	int k, l;
	float a[50][50];
	Nhap(a, k, l);
	cout << "Cac hang lon nhat la ";
	Lietke(a, k, l);
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
float Tongdong(float a[][50], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[d][j];
	return s;
}
float Tonglonnhat(float a[][50], int m, int n)
{
	float Max = Tongdong(a, m, n, 0);
	for (int i = 0; i < n; i++)
		if (Tongdong(a, m, n, i) > Max)
			Max = Tongdong(a, m, n, i);
	return Max;
}
void Lietke(float a[][50], int m, int n)
{
	for (int i = 0; i < n; i++)
		if (Tongdong(a, m, n, i) == Tonglonnhat(a, m, n))
			cout << setw(4) << i;
}