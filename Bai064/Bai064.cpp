#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool ktNguyenTo(int k);
int DemNguyenTo(int[][500], int, int, int);

int main()
{
	int b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran da nhap la: \n";
	Xuat(b, k, l);
	int c;
	cout << "Nhap cot can kiem tra: ";
	cin >> c;
	cout << "So luong so nguyen la so nguyen to tren mot cot la: ";
	cout << DemNguyenTo(b, k, l, c);
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


bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	return (dem == 2);
}

int DemNguyenTo(int a[][500], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		if (ktNguyenTo(a[i][c]) == true)
			dem = dem + 1;
	}
	return dem;
}
