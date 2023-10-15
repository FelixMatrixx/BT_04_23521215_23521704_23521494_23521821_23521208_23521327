#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[][100], int&, int&);
bool Ktranguyento(int);
void Lietke(int[][100], int, int);
int main()
{
	int  k, l;
	int a[100][100];
	Nhap(a, k, l);
	Lietke(a, k, l);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
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
void Lietke(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (Ktranguyento(a[i][j]))
				cout << setw(8) << a[i][j];
		}
	
}
