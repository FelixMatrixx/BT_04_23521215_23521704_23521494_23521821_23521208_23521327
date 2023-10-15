#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void XuatA(float[][100], int, int);
void ConCuoi(float[][100], int, int, int&, int&);
int ktCon(float[][100], int, int, int, int);

int main()
{
	float a[100][100];
	int m, n, vtd, vtc;
	Nhap(a, m, n);
	XuatA(a, m, n);
	ConCuoi(a, m, n, vtd, vtc);
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}
int ktCon(float a[][100], int m, int n, int vtd, int vtc)
{
	int flag = 1;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[vtd + i][vtc + j] >= 0)
				flag = 0;
	return flag;
}
void ConCuoi(float a[][100], int m, int n, int& vtd, int& vtc)
{
	for (vtd = m - 3; vtd >= 0; vtd--)
		for (vtc = n - 3; vtc >= 0; vtc--)
			if (ktCon(a, m, n, vtd, vtc) == 1)
				return;
	vtd = vtc = -1;
}
void XuatA(float a[][100], int m, int n)
{
	cout << "\nMa tran =\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
	}
}