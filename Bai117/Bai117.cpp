#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][20], int&, int&);
void XayDung(float[][20], int, int, float[][20], int&, int&);
void Xuat(float[][20], int, int);
int main()
{
	float a[20][20];
	int m, n;
	Nhap(a, m, n);
	float b[20][20];
	int k, l;
	XayDung(a, m, n, b, k, l);
	Xuat(b, k, l);
	return 0;
}
void Nhap(float a[][20], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void XayDung(float a[][20], int m, int n, float b[][20], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[i][j] = abs(a[i][j]);
}
void Xuat(float a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}