#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(long[][100], int&, int&);
void LietKe(long[][100], int, int);
bool ktChinhPhuong(long[][100], int, int, int, int);

int main()
{
	long a[100][100], k;
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}
void Nhap(long a[][100], int& m, int& n)
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
bool ktChinhPhuong(long a[][100], int i, int j, int m, int n)
{
	for (int k = 0; k <= m * n; k++)
		if (k * k == a[i][j])
			return true;
	return false;
}
void LietKe(long a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktChinhPhuong(a, i, j, m, n))
				cout << setw(4) << a[i][j];
}