#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
bool Ktcon(float[][50], int, int ,int ,int);
int Demcon(float[][50], int, int);
int main()
{
	int  k, l;
	float a[50][50];
	Nhap(a, k, l);
	cout << Demcon(a, k, l);
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
bool Ktcon(float a[][50], int m, int n ,int vtd , int vtc)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[vtd+i][vtc+j] < 0)
				return false;
	return true;
}
int Demcon(float a[][50], int m, int n)
{
	int count = 0;
	for (int vtd = 0; vtd <= m - 3; vtd++)
		for (int vtc = 0; vtc <= n - 3; vtc++)
			if (Ktcon(a, m, n, vtd, vtc))
				count++;
	return count;
}