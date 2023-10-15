#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[][50], int&, int&);
bool Ktranguyento(int);
int Nguyentodau(int[][50], int, int);
int Maxnguyento(int[][50], int, int);
int main()
{
	int k, l;
	int a[50][50];
	Nhap(a, k, l);
	if (Maxnguyento == 0)
		cout << " Khong co so nguyen to ";
	else
		cout << "So nguyen to lon nhat la " << Maxnguyento(a, k, l);
	return 0;
}
void Nhap(int  a[][50], int& m, int& n)
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
bool Ktranguyento(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return n > 1;
}
int Nguyentodau(int a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (Ktranguyento(a[i][j]))
				return a[i][j];
	return 0;
}
int Maxnguyento(int a[][50], int m, int n)
{
	int Max = Nguyentodau(a, m, n);
	for (int i = 0 ; i < m ; i++)
		for (int j = 0; j < n; j++)
		{
			if (Ktranguyento(a[i][j]) && a[i][j] > Max)
				Max = a[i][j];
		}
	return Max;
}