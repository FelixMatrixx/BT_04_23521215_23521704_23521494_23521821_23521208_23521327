#include <iostream>
using namespace std;
void Nhap(int[][100], int&, int&);
bool ktDang5m(int);
int Tong5m(int[][100], int, int);
void Xuat(int);
int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(Tong5m(a, m, n));
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
bool ktDang5m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	for (int t = n; t>1; t = t / 5)
		if (t % 5 != 0)
			flag = false;
	return flag;
}
int Tong5m(int a[][100], int m,int n)
{
	int d;
	cout << "Nhap chi so dong: ";
	cin >> d;
	int S = 0;
	for (int j = 0; j < n; j++)
		if (ktDang5m(a[d][j]))
			S = S + a[d][j];
	return S;
}
void Xuat(int n)
{
	cout << "Tong 5m= " << n;
}