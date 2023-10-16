#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;
void Nhap(float [][100], int&, int&);
void Xuat(float[][100], int, int);
void Xuat(string, float[][100], int, int);
int main()
{
	float a[100][100];
	int n, m;
	Nhap(a, m, n);
	Xuat(a, m, n);
	Xuat("floatdata06.inp", a, m, n);
	return 0;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong m: ";
	cin >> m;
	cout << "Nhap so cot n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100.0 + rand() /( RAND_MAX / (200.0));
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(12) << a[i][j];
		cout << endl;
	}
}
void Xuat(string filename, float a[][100], int m, int n)
{
	ofstream fo(filename);
	fo << m;
	fo << n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			fo << setw(12) << a[i][j];
		fo << endl;
	}
}