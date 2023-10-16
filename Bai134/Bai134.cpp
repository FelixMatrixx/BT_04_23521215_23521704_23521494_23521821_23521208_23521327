#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][100], int&, int&);
void HoanVi(int&, int&);
void XuatChanGiam(int[][100], int, int);
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	XuatChanGiam(a, m, n);
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
void HoanVi(int & a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void XuatChanGiam(int a[][100], int m, int n)
{
	int b[50];
	int k = 0;
	int dem = 0;
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
			{
				b[k] = a[i][j];
				k++;
			}
	
	for (int i = 0; i <= k - 2; i++)
		for (int j = i+1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);
	for (int i = 0; i < k; i++)
		cout << setw(8) << b[i];
}
