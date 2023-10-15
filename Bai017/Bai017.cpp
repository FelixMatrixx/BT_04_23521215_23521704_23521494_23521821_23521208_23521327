#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(long[][100], int&, int&);
bool ktHoanThien(long[][100], int, int);
void LietKe(long[][100], int, int);

int main()
{
	long a[100][100];
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
bool ktHoanThien(long a[][100], int i, int j)
{
	long k = a[i][j];
	int s = 0;
	for (int l = 1; l < k; l++)
		if (k % l == 0)
			s = s + l;
	if (s == k)
		return true;
	return false;
}
void LietKe(long a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktHoanThien(a, i, j))
				cout << setw(4) << a[i][j];
}