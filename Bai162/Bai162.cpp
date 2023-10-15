#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[][50], int&, int&);
void Dich90do(float[][50], int&, int&);
void Dich180do(float[][50], int&, int&);
void Xuat(float[][50], int, int);
/* nguyen tac thuat toan quay 90 do
 khi quay 90 do thi hangbandau max se thanh cotsau max
 - hangbandau min se thanh cotsau min
-cotbandau max se thanh hangsau min
-cotbandau min se thanh hangsau max*/
int main()
{
	int k, l;
	float a[50][50];
	Nhap(a, k, l);
	Dich180do(a, k, l);
	Xuat(a, k, l);
	return 0;
}
void Nhap(float  a[][50], int& m, int& n)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void Dich90do(float a[][50], int& m, int& n)
{
	float b[50][50];
	int k = n;
	int  l = m;
	int t = l - 1;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = a[l-1-j][i];
	m = k;
	n = l;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
	}

}
void Dich180do(float a[][50], int& m, int& n)
{
	Dich90do(a, m, n);
	Dich90do(a, m, n);
}
void Xuat(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}