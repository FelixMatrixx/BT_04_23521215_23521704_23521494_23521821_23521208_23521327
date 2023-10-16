#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
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
