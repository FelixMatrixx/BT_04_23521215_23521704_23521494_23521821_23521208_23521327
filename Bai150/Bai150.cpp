#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
float Nhonhatdong(float[][50], int, int, int);
void Themphantu(float[][50], int, int&);
void Xuat(float[][50], int, int);
int main()
{
	int k, l;
	float a[50][50];
	Nhap(a, k, l);
	Themphantu(a, k, l);
	Xuat(a, k, l);
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
float Nhonhatdong(float a[][50], int m, int n, int d)
{
	float min = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] < min)
			min = a[d][j];
	return min;
}
void Themphantu(float a[][50], int m, int& n)
{
	
	for (int i = 0; i < m; i++)
		 a[i][n] = Nhonhatdong(a, m, n, i);
	n++;
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