#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
int ktCot(int[][100], int, int);
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
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

int ktCot(int a[][100], int m, int n, int cot)
{
	int flag = 1;
	for (int i = 0; i < m-1; i++)
		if (a[i][cot]>a[i+1][cot])
		{
			flag = 0;
			break;
		}
	return flag;
}
void LietKe(int a[][100], int m, int n)
{
	for (int j = 0; j<n; j++)
	{
		int flag = ktCot(a, m, n, j);
		if (flag == 1)
			cout << j << setw(4);
	}
}