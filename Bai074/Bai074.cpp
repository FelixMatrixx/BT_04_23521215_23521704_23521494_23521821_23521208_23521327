#include <iostream>
using namespace std;
void Nhap(int[][100], int&, int&);
bool ktChan(int);
int ChanDau(int[][100], int, int);
void Xuat(int);
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(ChanDau(a, m, n));
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
void Xuat(int n)
{
	cout << "Gia tri chan dau tien: " << n;
}
bool ktChan(int n)
{
	if (n >= 0 && n % 2 == 0)
		return true;
	return false;
}
int ChanDau(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (ktChan(a[i][j]))
			{
				return a[i][j];
				break;
			}
	}
	return -1;
}
//bai 74 khong cho output giong dap an
