#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][50], int&, int&);
int ktDong(float[][50], int, int, int);
void LietKe(float[][50], int, int);
int main()
{
	float a[50][50];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
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
int ktDong(float a[][50], int m, int n, int d)
{
	int flag = 1;
	int dem[3] = { 0, 0, 0 };
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] > 0)
			dem[2]++;
		if (a[d][j] < 0)
			dem[0]++;
		if (a[d][j] == 0)
			dem[1]++;
	}
	if (dem[0] == 0 || dem[1] == 0 || dem[2] == 0)
		flag = 0;
	return flag;
}
void LietKe(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i) == 1)
		{
			for (int j = 0; j < n; j++)
				cout << setw(4) << a[i][j];
			cout << endl;
		}
}