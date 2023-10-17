#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
int ktCucDai(float[][500], int, int, int, int);
int ktCucTieu(float[][500], int, int, int, int);
float TongCucDai(float[][500], int, int);
float TongCucTieu(float[][500], int, int);
float TongCucTri(float[][500], int, int);

int main()
{
	float b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma Tran da nhap la: ";
	Xuat(b, k, l);
	cout << "Tong cuc tri trong ma tran la: ";
	cout << TongCucTri(b, k, l);
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

int ktCucTieu(float a[][50], int m, int n, int i, int j)
{
	int flag = 1;
	int di[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int dj[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
	for (int t = 0; t < 8; t++)
		if (a[i + di[t]][j + dj[t]] < a[i][j]
			&& i + di[t] >= 0 && j + dj[t] >= 0
			&& i + di[t] < m && j + dj[t] < n)
			flag = 0;
	return flag;
}

int ktCucDai(float a[][500], int m, int n, int i, int j)
{
	int flag = 1;
	int di[8] = { -1,-1,-1,0,1,1,1,0 };
	int dj[8] = { -1,0,1,1,1,0,-1,-1 };
	for (int t = 0; t < 8; t++)
			if (a[i + di[t]][j + dj[t]] > a[i][j]
				&& i + di[t] >= 0 && j + dj[t] >= 0
				&& i + di[t] < m && j + dj[t] < n)
				flag = 0;
	return flag;
}

float TongCucTieu(float a[][50], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucTieu(a, m, n, i, j) == 1)
				s += a[i][j];
	return s;
}

float TongCucDai(float a[][50], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucDai(a, m, n, i, j) == 1)
				s += a[i][j];
	return s;
}

float TongCucTri(float a[][500], int m, int n)
{
	float s1 = TongCucDai(a, m, n);
	float s2 = TongCucTieu(a, m, n);
	return (s1 + s2);
}