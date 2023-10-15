#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int& ,int&);
float Tongdong(float[][50], int, int ,int );
int main()
{
	int  k, l , d;
	float a[50][50];
	Nhap(a, k, l , d);
	cout << "Tong gia tri tren 1 dong la " << Tongdong(a, k, l, d);
	return 0;
}
void Nhap(float  a[][50], int& m, int& n , int& d)
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
float Tongdong(float a[][50], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[d][j];
	return s;

}