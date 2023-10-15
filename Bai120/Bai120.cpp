#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[][50], int&, int& ,int& , int& );
void Hoanvidong(int[][50], int, int, int, int);
void Xuat(int[][50], int, int);
int main()
{
	int k, l ,d1,d2;
	int a[50][50];
	Nhap(a, k, l , d1 ,d2 );
	Hoanvidong(a, k, l, d1, d2);
	cout << "Ma tran sau khi hoan vi la ";
	Xuat(a, k, l);
	return 0;
}
void Nhap(int  a[][50], int& m, int& n ,int& d1 , int& d2)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	cout << "Nhap 2 dong muon hoan vi ";
	cin >> d1 >> d2;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void Hoanvidong(int a[][50], int m, int n, int d1, int d2)
{
	int b[50][50];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[i][j] = a[i][j];
	for (int j = 0; j < n; j++)
	{
		a[d1][j] = b[d2][j];
		a[d2][j] = b[d1][j];
	}

}
void Xuat(int a[][50], int m, int n)
{
	for (int i = 0; i < m ;i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}