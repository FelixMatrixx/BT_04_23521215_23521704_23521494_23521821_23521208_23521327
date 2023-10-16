#include <iostream>
using namespace std;
void Nhap(float[][100], int&, int&);
bool ktDuong(float);
int ktToanDuong(float[][100], int, int);
void Xuat(int);
int main()
{
	float a[100][100];
	int m, n;;
	Nhap(a, m, n);
	Xuat(ktToanDuong(a, m, n));
	return 0;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i=0;i<m;i++)
		for (int j = 0; j < m; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
bool ktDuong(float n)
{
	if (n > 0)
		return true;
	return false;
}
int ktToanDuong(float a[][100], int m, int n)
{
	int flag = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (!ktDuong(a[i][j]))
			{
				flag = 0;
				break;
			}
	return flag;
}
void Xuat(int flagg)
{
	if (flagg == 1)
		cout << "Toan Duong";
	else
		cout << " Khong Toan duong";
}