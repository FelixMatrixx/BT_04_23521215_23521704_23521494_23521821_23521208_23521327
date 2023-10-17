#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool ktToanLe(int, int);
void LietKe(int[][500], int, int);

int main()
{
	int b[500][500];
	int k, l;
	Nhap(b, k, l);
	cout << "Ma tran da nhap la: ";
	Xuat(b, k, l);
	cout << "Cac so nguyen toan chu so le tren bien cua ma tran la: \n";
	LietKe(b, k, l);
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

bool ktToanLe(int n)
{
	int t = n;
	while (t != 0)
	{
		if (t % 2 == 0)
			return false;
		t /= 10;
	}
	return true;
}

void LietKe(int a[][500], int m, int n)
{
	for (int j=0; j<= n -2; j++)
		if (ktToanLe(a[0][j]) ==true)
			cout << setw(8) << a[0][j];
	for (int i =0; i<=m-2; i++)
		if (ktToanLe(a[i][n-1]) == true)
			cout << setw(8) << a[i][n-1];
	for (int j = n-1; j >=1 ; j--)
		if (ktToanLe(a[m-1][j]) == true)
			cout << setw(8) << a[m-1][j];
	for (int i = n - 1; i >= 1; i--)
		if (ktToanLe(a[i][0]) == true)
			cout << setw(8) << a[i][0];
}