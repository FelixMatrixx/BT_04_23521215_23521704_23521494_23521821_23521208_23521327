#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int& );
int Demduong(float[][50], int, int);
int main()
{
	int k, l;  //hang + cot
	float a[50][50];
	Nhap(a, k, l);
	cout << "So luong so duong la " << Demduong(a, k, l);
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
int Demduong(float a[][50], int m, int n)
{
	int count =0 ;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				count++;
	}
	return count;
}