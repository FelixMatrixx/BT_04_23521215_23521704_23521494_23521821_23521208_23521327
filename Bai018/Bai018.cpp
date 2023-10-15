#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[][50], int&, int& , int& );
void Lietke(int[][50], int, int ,int);
int main()
{
	int  k, l, c; //k = hang  , l cot , c vi tri
	int a[50][50];
	Nhap(a, k, l, c);
	Lietke(a, k, l, c);
	return 0;
}
void Nhap(int a[][50], int& m, int& n , int& c)
{
	cout << "Nhap m ";
	cin >> m;
	cout << "Nhap n ";
	cin >> n;
	cout << "Nhap vi tri ";
	cin >> c;
				
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}
void Lietke(int a[][50], int m, int n , int c)
{
	for (int i = 0; i < m; i++)
	{
		if (a[i][c] % 2 == 0)
			cout << setw(8) << a[i][c];
	}

}
