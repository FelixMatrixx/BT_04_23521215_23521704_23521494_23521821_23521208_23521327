#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool ktDang2m(int);
int DemDang2m(int[][500], int, int);

int main()
{
	int b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma Tran da nhap la: ";
	Xuat(b, k, l);
	cout << "So luong so nguyen co dang 2^m la: ";
	cout << DemDang2m(b, k, l);
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << setprecision(5);
			cout << a[i][j];
		}
		cout << "\n";
	}
}

bool ktDang2m(int k)
{
	if (k < 1)
		return false;
	bool flag = true; 
	for (int t = k; t > 1; t = t / 2)
	{
		int du = t % 2;
		if (du != 0)
			flag = false;
	}
	return flag;
}

int DemDang2m(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j<m; j++)
			if (ktDang2m(a[i][j]) == 1)
				dem += 1;
	}
	return dem;
}