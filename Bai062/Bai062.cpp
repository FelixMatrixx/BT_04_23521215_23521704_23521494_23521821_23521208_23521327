#include <iostream>
using namespace std;
void Nhap(int[][100], int&, int&);
bool ktToanLe(int);
int DemToanLe(int[][100], int, int, int&);
void Xuat(int);
int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(DemToanLe(a, m, n,d));
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
bool ktToanLe(int n)
{
	bool flag = true;
	for (int t = abs(n); t != 0; t = t / 10)
		if ((t % 10) % 2 == 0)
			flag = false;
	return flag;
}
int DemToanLe(int a[][100], int m, int n,int &d)
{
	cout << "Nhap chi so dong: ";
	cin >> d;
	if (d < 0 || d >= m)
	{
		cout << "Khong hop le:";
		return 0;
	}
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (ktToanLe(a[d][j]))
			dem++;
	return dem;
}
void Xuat(int dem)
{
	cout << "So luong so toan le la: " << dem;
}