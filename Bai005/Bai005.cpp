#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);


int main()
{
	int a[100][100], m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
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
void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nGia tri a[" << i << "][" << j << "] = ";
			cout << a[i][j];
		}
}