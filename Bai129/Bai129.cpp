#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void SapTang(float[][50], int, int);
void Xuat(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	SapTang(a, n, m);
	Xuat(a, n, m);
	return 0;
}
void Nhap(float a[][50], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void SapTang(float a[][50], int m, int n)
{
	float b[50];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[k++] = a[i][j];
	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++)
			if (b[i] > b[j])
			{
				float temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = b[k++];
}
void Xuat(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}