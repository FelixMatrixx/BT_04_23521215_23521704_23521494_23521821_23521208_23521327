#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&, int&);
void Xuat(float[][100], int, int);
void SapCotGiam(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n, d;
	Nhap(a, m, n, d);
	Xuat(a, m, n);
	SapCotGiam(a, m, d);
	Xuat(a, m, n);

}
void Nhap(float a[][100], int& m, int& n, int& d)
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
	cout << "Nhap chi so (index) cua cot muon sap xep giam: ";
	cin >> d;
}
void SapCotGiam(float a[][100], int m, int c)
{
	for (int i = 0; i <= m - 2; i++)
	{
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] < a[j][c])
			{
				float temp = a[i][c];
				a[i][c] = a[j][c];
				a[j][c] = temp;
			}
	}
}
void Xuat(float a[][100], int m, int n)
{
	cout << "\nMa tran A =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
	}
}