#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(double[][50], int&, int&);
void Xuat(double[][50], int, int);
int main()
{
	int k, l;
	double  a[50][50];
	Nhap(a, k, l);
	Xuat(a, k, l);
	return 0;
}
void Nhap(double a[][50], int& m, int& n)
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
void Xuat(double a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}

}