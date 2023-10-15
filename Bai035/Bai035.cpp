#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
bool ktDoiXung(int[][100], int, int);
int Tong(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n, d);
	cout << Tong(a, m, n, d);
	return 0;
}
void Nhap(int a[][100], int& m, int& n, int& d)
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
	cout << "Nhap chi so (index) cua dong muon tinh tong doi xung: ";
	cin >> d;
}
bool ktDoiXung(int a[][100], int i, int j)
{
	int t = abs(a[i][j]);
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t /= 10;
	}
	if (dn == abs(a[i][j]))
		return true;
	return false;
}
int Tong(int a[][100], int m, int n, int d)
{
	int s = 0;
	int i = d;
	for (int j = 0; j < n; j++)
		if (ktDoiXung(a, i, j))
			s += a[i][j];
	return s;
}