#include<iostream>

using namespace std;
void Nhap(float[][50], int&, int&);
int ktDongTang(float[][50], int, int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	int d;
	cin >> d;
	int kq = ktDongTang(a, m, n, d);
	cout << kq;
	return 0;
}
void Nhap(float a[][50], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int ktDongTang(float a[][50], int m, int n, int d)
{
	int flag = 1;
	for (int j = 0; j < n - 1; j++)
		if (a[d][j] > a[d][j + 1])
			flag = 0;
	return flag;
}
