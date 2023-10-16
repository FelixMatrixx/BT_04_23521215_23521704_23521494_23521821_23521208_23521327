#include <iostream>
#include<iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
bool ktToanAm(float [][100], int, int, int cot);
void XoaCot(float [][100], int , int & , int );
void XoaCotAm(float[][100], int m, int &n);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	XoaCotAm(a, m, n);
	return 0;
}
void Nhap(float a[][100], int& m, int& n)
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
bool ktToanAm(float a[][100], int m, int n, int cot)
{
	bool flag = true;
	for (int i = 0; i < m; i++)
		if (a[i][cot] > 0)
			flag = false;
	return flag;
}
void XoaCot(float a[][100], int m, int &n, int cot)
{
	for (int i = 0; i < m; i++)
		for (int j = cot; j < n - 1; j++)
			a[i][j] = a[i][j + 1];
	n--;
}
void XoaCotAm(float a[][100], int m, int &n)
{
	for (int j = 0; j < n; j++)
		if (ktToanAm(a, m, n, j))
			XoaCot(a, m, n, j);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(12);
		cout << endl;
	}
}