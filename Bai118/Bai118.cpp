#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
float LonNhatDong(float[][500], int, int, int);
float LonNhatCot(float[][500], int, int, int);
void XayDung(float[][500], int, int, float[][500], int&, int&);

int main()
{
	float b[50][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran da nhap la: \n";
	Xuat(b, k, l);
	float a[50][500];
	int m, n;
	XayDung(b, k, l, a, m, n);
	cout << "Ma tran B: \n";
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}


void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << setprecision(5);
			cout << a[i][j];
		}
		cout << "\n";
	}
}

float LonNhatDong(float a[][500], int m, int n, int d)
{
	float lc = a[d][0];
	for (int j = 0; j < m; j++)
		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}

float LonNhatCot(float a[][500], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}

void XayDung(float a[][500], int m, int n,
	float b[][500], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i<k;i++)
		for (int j = 0; j < l; j++)
		{
			float lnd = LonNhatDong(a, m, n, i);
			float lnc = LonNhatCot(a, m, n, j);
			if (lnd < lnc)
				b[i][j] = lnc;
			else
				b[i][j] = lnd;
		}
}