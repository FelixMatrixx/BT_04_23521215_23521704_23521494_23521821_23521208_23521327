#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
bool ktDang5m(int);
void LietKe(int[][100], int, int);
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
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
bool ktDang5m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	for (int t = n; t > 1; t = t / 5)
		if (t % 5 != 0)
			flag = false;
	return flag;
}
void LietKe(int a[][100], int m, int c)
{
	cout << "Nhap chi so cot : ";
	cin >> c;
	for (int i = 0; i < m; i++)
		if (ktDang5m(a[i][c]))
			cout << a[i][c] << setw(5);
}
