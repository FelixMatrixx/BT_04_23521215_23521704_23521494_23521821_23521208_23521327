#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int& );
int Demduongbien(float[][50], int, int);
int main()
{
	int k, l; // hang +cot 
	float a[50][50];
	Nhap(a, k, l);
	cout << "So luong so duong tren bien la " << Demduongbien(a, k, l);
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
int Demduongbien(float a[][50], int m, int n)
{
	int count = 0;
	for (int i = 0; i < m; i++) // demsoluong hang  0 den hang m-1 ; cot 0 
		if (a[i][0] > 0)
			count++;
	for (int j = 1; j < n - 1; j++)// demsoluong hang 0 , cot  1 den n-2
		if (a[0][j] > 0)
			count++;
	for (int i = 0; i < m; i++)// demsoluong hang 1 den hang m-1 , cot n-1
		if (a[i][n - 1] > 0)
			count++;
	for (int j = 1; j < n - 1; j++) // dem so luong hang m-1  , cot 1 den cot n-2
		if (a[m - 1][j] > 0)
			count++;
	return count;
	
}