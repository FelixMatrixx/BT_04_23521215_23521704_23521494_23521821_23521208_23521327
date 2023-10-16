#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][100], int&, int&);
float LonNhat(float[][100], int, int);
float LonNhatDong(float[][100], int, int, int);
void LietKe(float[][100], int, int);
int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
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
// gia tri lon nhat
float LonNhat(float a[][100], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > lc)
				lc = a[i][j];
	return lc;
}
//gia tri lon nhat cua tung dong
float LonNhatDong(float a[][100], int m, int n, int dong)
{
	float lc = a[dong][0];
	for (int j = 0; j < n; j++)
		if (a[dong][j] > lc)
			lc = a[dong][j];
	return lc;
}
void LietKe(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (LonNhatDong(a, m, n, i) == LonNhat(a, m, n))
			cout << i << " ";
}