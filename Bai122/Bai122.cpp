#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
void HoanVi(float &, float &);
void SapDongTang(float[][100], int, int, int);
void Xuat(float[][100], int, int);
int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;

}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
void HoanVi(float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}
void SapDongTang(float a[][100], int m, int n, int dong)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[dong][i] > a[dong][j])
				HoanVi(a[dong][i], a[dong][j]);
}
void Xuat(float a[][100], int m, int n)
{
	int dong;
	cout << "Nhap chi so dong: ";
	cin >> dong;
	SapDongTang(a, m, n, dong);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(8);
		cout << endl;
	}
}
