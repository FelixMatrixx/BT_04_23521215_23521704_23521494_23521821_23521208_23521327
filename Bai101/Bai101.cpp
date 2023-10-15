#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
int TonTaiDuong(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	cout << TonTaiDuong(a, m, n);
	return 0;
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
int TonTaiDuong(float a[][100], int m, int n)
{
	int flag = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				flag = 1;
	return flag;
}