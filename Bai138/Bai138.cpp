#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
void Hoanvi(float&, float&);
void Duongtang(float[][50], int, int);
void Xuat(float[][50], int, int);
int main()
{
	int k, l;
	float a[50][50];
	Nhap(a, k, l);
	Duongtang(a, k, l);
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
void Hoanvi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void Duongtang(float a[][50], int m, int n)
{
	float b[100];
	int k;
	k = 0;
	for (int j = 0; j < n ; j++)
		if (a[0][j] > 0)
			b[k++] = a[0][j];

	for (int i = 1; i < m-1; i++)
		if (a[i][n - 1] > 0)
			b[k++] = a[i][n - 1];
	

	for (int j = n-1; j >= 0 ; j--)
		if (a[m - 1][j] > 0)
			b[k++] = a[m - 1][j];
	
	for (int i = m-2; i > 0; i--)
		if (a[i][0] > 0)
			b[k++] = a[i][0];
	//Do gia tri duong vao mang b theo chieu kim dong ho

	
	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++)
			if (b[j] < b[i])
				Hoanvi(b[j], b[i]);
	//Sap xep mang b

	k = 0;
	for (int j = 0; j < n; j++)
		if (a[0][j] > 0)
			 a[0][j] = b[k++];

	for (int i = 1; i < m - 1; i++)
		if (a[i][n - 1] > 0)
			a[i][n - 1] =	b[k++]  ;


	for (int j = n - 1; j >= 0; j--)
		if (a[m - 1][j] > 0)
			a[m - 1][j] = b[k++];

	for (int i = m - 2; i > 0; i--)
		if (a[i][0] > 0)
			a[i][0] = b[k++];
	// Do nguoc mang b vao lai mang a theo chieu ki
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