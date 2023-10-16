#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
bool ktNguyenTo(int);
int ktDong(int[][100], int, int);
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
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	return (dem == 2);
}
int ktDong(int a[][100], int m, int n, int dong)
{
	int flag = 0;
	for(int j=0;j<n;j++)
		if (ktNguyenTo(a[dong][j]))
		{
			flag = 1;
			break;
		}
	return flag;
}
void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		int flag = ktDong(a, m, n, i);
		if (flag == 1)
			cout << i << setw(4);
	}
}