#include <iostream>
using namespace std;
void Nhap(float a[][100], int& m, int& n);
float Tong(float[][100], int, int, float, float);
int main()
{
	float a[100][100];
	int m, n;
	float x, y;
	cout << "Nhap x:";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	Nhap(a, m, n);
	float S= Tong(a, m, n, x, y);
	cout << S;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{ 
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
float Tong(float a[][100], int m, int n, float x, float y)
{
	float S = 0;
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			if (x <= a[i][j] && a[i][j] <= y)
				S = S + a[i][j];
		}
	return S;
}