#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang2m(int);
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong m: ";
	cin >> m;
	cout << "Nhap so dong n: ";
	cin >> n;
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
bool ktDang2m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	for (int t = n; t > 1; t=t / 2)
		if (t % 2 != 0)
			flag = false;
	return flag;
}
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(ktDang2m(a[i][j]))
			cout << a[i][j] << setw(12);
		}
	}
}