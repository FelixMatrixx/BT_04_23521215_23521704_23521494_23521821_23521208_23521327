#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
int ktDong(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran da nhap la: \n";
	Xuat(b, k, l);
	LietKe(b, k, l);
	return 0;
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

int ktDong(float a[][500], int m, int n, int d)
{
	int flag;
	for (int j = 0; j < n; j++)
	{
		flag = 0;
		if (a[d][j] < 0)
			flag = 1;
		else
			return flag;
	}
	return flag;
}

void LietKe(float a[][500], int m, int n)
{
	cout << "Cac dong toan gia tri am trong ma tran la: \n";
	for (int i = 0; i < m; i++)
	{
		int d = i;
		if (ktDong(a, m, n, d) == 1)
		{
			for (int j = 0; j < m; j++)
				cout << setw(5) << a[i][j];
		}
	}
}