#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
float TichDuong(float[][500], int, int);
int DemDuong(float[][500], int, int);
float TbnDuong(float[][500], int, int);

int main()
{
	float b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran da nhap la: \n";
	Xuat(b, k, l);
	cout << "Trung binh nhan cac so duong trong ma tran la: ";
	cout << TbnDuong(b, k, l);
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

float TichDuong(float a[][500], int m, int n)
{
	float s = 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				s = s * a[i][j];
	}
	return s;
}

int DemDuong(float a[][500], int m, int n)
{
	int p = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				p = p + 1;
	}
	return p;
}

float TbnDuong(float a[][500], int m, int n)
{
	float s;
	s = pow(TichDuong(a, m, n), (float)1/(DemDuong(a, m, n)));
	return s;
}
