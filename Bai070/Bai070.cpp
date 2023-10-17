#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
int ktCucDai(float[][500], int, int, int, int);
int DemCucDai(float[][500], int, int);

int main()
{
	float b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma Tran da nhap la: ";
	Xuat(b, k, l);
	cout << "So luong phan tu cuc dai trong ma tran la: ";
	cout << DemCucDai(b, k, l);
}

void Nhap(float a[][500], int& m, int& n)
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

void Xuat(float a[][500], int m, int n)
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

int ktCucDai(float a[][500], int m, int n, int i, int j)
{
	int flag = 1;
	int di[8] = { -1,-1,-1,0,1,1,1,0 };
	int dj[8] = { -1,0,1,1,1,0,-1,-1 };
	for (int t = 0; t<8; t++)
		for (int t = 0; t < 8; t++)
			if (a[i + di[t]][j + dj[t]] > a[i][j]
				&& i + di[t] >= 0 && j + dj[t] >= 0
				&& i + di[t] < m && j + dj[t] < n)
				flag = 0;
	return flag;
}

int DemCucDai(float a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucDai(a, m, n, i, j) == 1)
				s += 1;
	return s;
}