#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
int ktCotGiam(float[][500], int, int, int);

int main()
{
	float b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran da nhap la: \n";
	Xuat(b, k, l);
	int c;
	cout << "Nhap cot can kiem tra: ";
	cin >> c;
	cout << ktCotGiam(b, k, l, c);
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

int ktCotGiam(float a[][500], int m, int n, int c)
{
	int flag = 0;
	for (int i = 0; i < m; i++)
		if (a[i][c] > a[i + 1][c])
			flag = 1;
	return flag;
}

