#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Tong(int[][100], int, int);
bool ktChinhPhuong(int);
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Tong(a, m, n);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
bool ktChinhPhuong(int n)
{
	if (n < 1)
		return false;
	bool flag = false;
	for (int i = 1; i <= n; i++)
		if (i * i == n)
			flag = true;
	return flag;
}
void Tong(int a[][100], int m, int n)
{
	int S = 0;
	for (int j=1;j<n;j=j+2)
		for (int i = 0; i < m; i++)
			if (ktChinhPhuong(a[i][j]))
				S += a[i][j];
	cout << S;
}