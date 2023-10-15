#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][50], int&, int&);
void LietKe(int[][50], int, int);
int main()
{
	int a[50][50];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}
void Nhap(int a[][50], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void LietKe(int a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				cout << setw(4) << a[i][j];
}