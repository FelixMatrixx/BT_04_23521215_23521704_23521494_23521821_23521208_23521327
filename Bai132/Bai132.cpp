#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
void Hoanvi(float&, float&);
void Amtang(float[][50], int, int);
void Duonggiam(float[][50], int, int);
void Sapxep(float[][50], int, int);
void Xuat(float[][50], int, int);
int main()
{
	int k, l;
	float a[50][50];
	Nhap(a, k, l);
	Sapxep(a, k, l);
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
void Amtang(float a[][50], int m, int n)
{
	float b[100];
	int k;
	k = 0;
	int i, j;
	for ( i = 0; i < m; i ++ )
		for ( j = 0; j < n; j++)
			if (a[i][j] < 0)
				b[k++] = a[i][j];

	for ( i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++)
			if (b[i] > b[j])
				Hoanvi(b[j], b[i]);
	
	k = 0;
	for ( i = 0; i < m; i++)
		for ( j = 0; j < n; j++)
			if (a[i][j] < 0)
				a[i][j] = b[k++];
	

}
void Duonggiam(float a[][50], int m, int n)
{
	float b[100];
	int k;
	k = 0;
	int i, j;
	for ( i = 0; i < m; i ++ )
		for ( j = 0; j < n; j++)
			if (a[i][j] > 0)
				b[k++] = a[i][j];
	
	for ( i = 0; i < k-1 ; i++)
		for ( j = i + 1; j < k; j++)
			if (b[j] > b[i])
				Hoanvi(b[j], b[i]);
	for (int i = 0; i < k; i++)
		cout << setw(4) << b[i];
	cout << endl;
	k = 0;
	for ( i = 0; i < m; i++)
		for ( j = 0; j < n; j++)
			if (a[i][j] > 0)
				a[i][j] = b[k++];
	

}

void Sapxep(float a[][50], int m, int n)
{
	Amtang(a, m, n);
	Duonggiam(a, m, n);
	
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