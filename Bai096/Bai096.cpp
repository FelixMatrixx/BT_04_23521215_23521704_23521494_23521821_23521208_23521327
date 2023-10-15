#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
float Max1(float[][50], int, int);
float Max2(float[][50], int, int);
int main()
{
	int k, l;
	float a[50][50];
	Nhap(a, k, l);
	float max1 = Max1(a, k, l);
	float max2 = Max2(a, k, l);
	if (max2 != max1)
		cout << "Gia tri lon thu 2 la " << max2;
	else
		cout << "Khong co gia tri lon thu 2 ";

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
float Max1(float a[][50], int m, int n)
{
	float Max = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > a[0][0])
				Max = a[i][j];
	return Max;
}
float Max2(float a[][50], int m, int n)
{
	float max1 = Max1(a,m,n) ;
	float max2 = max1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] != max1)
			{
				max2 = a[i][j];
				break;
			}
		
	}
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > max2 && a[i][j] != max1)
				max2 = a[i][j];
	return max2;
}
