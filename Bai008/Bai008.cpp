#include <iostream>
#include <fstream>;
#include <iomanip>;
using namespace std;
void Nhap(string filename, float[][100], int&, int&);
void Xuat(float[][100], int, int);
int main()
{
	float a[100][100];
	int m, n;
	Nhap("floatdata02", a, m, n);
	Xuat(a, m, n);
	return 0;
}
void Nhap(string filename, float a[][100], int& m, int& n)
{
	cout << "Nhap so dong m: ";
	cin >> m;
	cout << "Nhap so dong n: ";
	cin >> n;
	ifstream fi(filename);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			fi >> a[i][j];
		}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;

	}
}