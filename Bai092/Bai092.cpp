#include <iostream>
using namespace std;
void Nhap(int[][100], int&, int&);
int DemDong(int[][100], int, int, int);//dem so luong so chan tren mot dong
int DemLonNhat(int[][100], int, int);// dem so dong co nhieu so chan nhat
void LietKe(int[][100], int, int);// liet ke dong
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
int DemDong(int a[][100], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j]>=0 &&a[d][j] % 2 == 0)
			dem++;
	return dem;
}
int DemLonNhat(int a[][100], int m, int n)
{
	int lc = DemDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) > lc)
			lc = DemDong(a, m, n, i);
	return lc;
}
void LietKe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) == DemLonNhat(a, m, n))
			cout << i << " ";
}