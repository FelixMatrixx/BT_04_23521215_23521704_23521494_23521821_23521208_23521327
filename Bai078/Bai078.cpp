#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int& , int&);
float TimMinCot(float[][50], int, int, int);
int main()
{
	int k, l, c; // hang va cot
	float a[50][50];
	Nhap(a, k, l , c);
	cout << "Gia tri nho nhat tren cot " << c << " la " << TimMinCot(a, k, l, c);
	return 0;
}
void Nhap(float  a[][50], int& m, int& n , int& c)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	cout << "Nhap cot can tim ";
	cin >> c;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
float TimMinCot(float a[][50], int m, int n, int c)
{
	float Min = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] < Min)
			Min = a[i][c];
	return Min;
}