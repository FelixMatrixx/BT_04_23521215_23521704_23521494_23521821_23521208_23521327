#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
void LietKe(int a[][500], int m, int n);

int main()
{
	int b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran ban dau la: \n";
	Xuat(b, k, l);
	cout << "Gia tri le tren cac dong co chi so chan la: ";
	LietKe(b, k, l);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap m:";
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



void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] % 2 != 0)
					cout << setw(8) << a[i][j];
			}
		}
}