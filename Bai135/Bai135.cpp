#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
void XuatAmGiam(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	XuatAmGiam(a, m, n);
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
void XuatAmGiam(float a[][50], int m, int n)
{
	float b[50];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				b[k++] = a[i][j];
	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++)
			if (b[i] < b[j])
			{
				float temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	for (int i = 0; i < k; i++)
		cout << setw(4) << b[i];
}