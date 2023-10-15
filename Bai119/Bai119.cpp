#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void XuatA(float[][100], int, int);
void XuatB(float[][100], int, int);
void XayDung(float[][100], int, int, float[][100], int&, int&);
int DemLanCan(float[][100], int, int, int, int);

int main()
{
	float a[100][100];
	float b[100][100];
	int m, n, d, k, l;
	Nhap(a, m, n);
	XuatA(a, m, n);
	XayDung(a, m, n, b, k, l);
	XuatB(b, m, n);
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}
void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
	k = m;
	l = n;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = DemLanCan(a, m, n, i, j);
}
int DemLanCan(float a[][100], int m, int n, int d, int c)
{
	int dem = 0;
	for (int di = -1; di <= 1; di++)
		for (int dj = -1; dj <= 1; dj++)
			if (d + di >= 0 && d + di < m && c + dj >= 0 &&
				c + dj < n && !(di == 0 && dj == 0) &&
				a[d + di][c + dj]>0)
				dem++;
	return dem;
}
void XuatA(float a[][100], int m, int n)
{
	cout << "\nMa tran A =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(15) << a[i][j];
		}
	}
}
void XuatB(float b[][100], int k, int l)
{
	cout << "\nMa tran B =\n";
	for (int i = 0; i < k; i++)
	{
		cout << "\n";
		for (int j = 0; j < l; j++)
		{
			cout << setw(5) << b[i][j];
		}
	}
}