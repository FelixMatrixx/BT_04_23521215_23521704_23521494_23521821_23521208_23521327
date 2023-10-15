#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&, float&);
int TanSuat(float[][100], int, int, float);

int main()
{
	float a[100][100], x;
	int m, n;
	Nhap(a, m, n, x);
	cout << "Tan suat: " << TanSuat(a, m, n, x);
	return 0;
}
void Nhap(float a[][100], int& m, int& n, float& x)
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
	cout << "Nhap gia tri can tinh tan suat: ";
	cin >> x;
}
int TanSuat(float a[][100], int m, int n, float x)
{
	int dem = 0;
	for (int i = 0; i <= m - 1; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x)
				dem++;
	return dem;
}