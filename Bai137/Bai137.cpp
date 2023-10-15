#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void XuatA(float[][100], int, int);
void XuatB(float[][100], int, int);
void BienTang(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	XuatA(a, m, n);
	BienTang(a, m, n);
	XuatB(a, m, n);

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
void BienTang(float a[][100], int m, int n)
{
	float b[500];
	int k;


	int i, j;

	k = 0;
	for (j = 0; j <= n - 2; j++)
		b[k++] = a[0][j];
	for (i = 0; i <= m - 2; i++)
		b[k++] = a[i][n - 1];
	for (j = n - 1; j >= 1; j--)
		b[k++] = a[m - 1][j];
	for (i = m - 1; i >= 1; i--)
		b[k++] = a[i][0];

	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
			{
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}

	k = 0;
	for (j = 0; j <= n - 2; j++)
		a[0][j] = b[k++];
	for (i = 0; i <= m - 2; i++)
		a[i][n - 1] = b[k++];
	for (j = n - 1; j >= 1; j--)
		a[m - 1][j] = b[k++];
	for (i = m - 1; i >= 1; i--)
		a[i][0] = b[k++];
}
void XuatA(float a[][100], int m, int n)
{
	cout << "\nMa tran ban dau =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
	}
}
void XuatB(float a[][100], int m, int n)
{
	cout << "\nMa tran duoc sap xep tang dan bien =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
	}
}