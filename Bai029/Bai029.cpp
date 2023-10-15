#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktDang3m(int[][100], int, int);
int Tong(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Tong cac so co dang 3^m: " << Tong(a, m, n);
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
bool ktDang3m(int a[][100], int i, int j)
{
	int k = a[i][j];
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 3)
		if (t % 3 != 0)
			flag = false;
	return flag;
}
int Tong(int a[][100], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktDang3m(a, i, j))
				s += a[i][j];
	return s;
}