#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void LietKe(int [][500], int, int, int);

int main()
{
	int b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: \n";
	Xuat(b, k, l);
	int d;
	cout << "Nhap dong can kiem tra: ";
	cin >> d;
	cout << "So nguyen co dang 3^m tren dong la: \n";
	LietKe(b, k, l, d);
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

void LietKe(int a[][500], int m, int n, int d)
{
	int flag, t, du;
	flag = 1;
	for (int j = 0; j < m; j++)
	{
		t = a[d][j];
		while (t > 1)
		{
			du = t % 3;
			if (du != 0)
				flag = 0;
			t = t / 3;
		}
		if (flag == 1)
			cout << setw(8) << a[d][j];
	}
}