#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
int ChuSoDau(int[][100], int, int);
int Dem(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n, c;
	Nhap(a, m, n, c);
	cout << "So luong dem duoc: " << Dem(a, m, n, c);
	return 0;
}
void Nhap(int a[][100], int& m, int& n, int& c)
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
	cout << "Nhap chi so (index) cua cot muon dem so luong so co chu so dau la chan: ";
	cin >> c;
}
int ChuSoDau(int a[][100], int c, int i)
{
	int dt = abs(a[i][c]);
	while (dt >= 10)
		dt /= 10;
	return dt;
}
int Dem(int a[][100], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (ChuSoDau(a, c, i) % 2 == 0)
			dem++;
	return dem;
}