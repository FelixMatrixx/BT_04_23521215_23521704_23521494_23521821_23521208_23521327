#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
int DemChuSo(int);
int DemCot(int[][100], int, int, int);
int DemLonNhat(int[][100], int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
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
int DemChuSo(int k)
{
	if (k == 0)
		return 1;
	int dem = 0;
	for (int t = k; t != 0; t = t / 10)
		dem++;
	return dem;
}
int DemCot(int a[][100], int m, int n, int d)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		int k = a[i][d];
		s += DemChuSo(k);
	}
	return s;
}
int DemLonNhat(int a[][100], int m, int n)
{
	int lc = DemCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
	{
		int d = j;
		if (DemCot(a, m, n, d) > lc)
			lc = DemCot(a, m, n, d);
	}
	return lc;
}
void LietKe(int a[][100], int m, int n)
{
	cout << "\nChi so (index) cot co so chu so nhieu nhat: ";
	for (int j = 0; j < n; j++)
	{
		int s = 0;
		for (int i = 0; i < m; i++)
		{
			int k = a[i][j];
			s += DemChuSo(k);
		}
		if (s == DemLonNhat(a, m, n))
			cout << setw(5) << j;
	}
}