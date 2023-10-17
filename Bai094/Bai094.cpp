#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool ktHoanThien(int);
int DemDong(int[][500], int, int, int);
int DemLonNhat(int[][500], int, int);
void LietKe(int[][500], int, int);

int main()
{
	int b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran da nhap la: \n";
	Xuat(b, k, l);
	LietKe(b,k,l);
	return 0;
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

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	return (s == k);
}

int DemDong(int a[][500], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j < n; j++)
	{
		if (ktHoanThien(a[d][j]) == true)
			s += 1;
	}
	return s;
}

int DemLonNhat(int a[][500], int m, int n)
{
	int lc = DemDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
	{
		int c = i;
		if (DemDong(a, m, m, c) > lc)
			lc = DemDong(a, m, n, c);
	}
	return lc;
}

void LietKe(int a[][500], int m, int n)
{
	cout << "\nChi so dong co nhieu so hoan thien nhat: ";
	for (int i = 0; i < m; i++)
	{
		int s = 0;
		for (int j = 0; j < n; j++)
		{
			if (ktHoanThien(a[i][j]) == true)
				s += 1;
		}
		if (s == DemLonNhat(a, m, n))
			cout << setw(5) << i;
	}
}