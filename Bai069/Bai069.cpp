#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
int ktCucTieu(float[][50], int, int, int, int);
float TongCucTieu(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	float s = TongCucTieu(a, m, n);
	cout << s;
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
int ktCucTieu(float a[][50], int m, int n, int i, int j)
{
	int flag = 1;
	int di[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int dj[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
	for (int t = 0; t < 8; t++)
		if (a[i + di[t]][j + dj[t]] < a[i][j]
			&& i + di[t] >= 0 && j + dj[t] >= 0
			&& i + di[t] < m && j + dj[t] < n)
			flag = 0;
	return flag;
}
float TongCucTieu(float a[][50], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucTieu(a, m, n, i, j) == 1)
				s += a[i][j];
	return s;
}
