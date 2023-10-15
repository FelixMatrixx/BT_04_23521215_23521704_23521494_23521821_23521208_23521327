#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;
void NhapMang(float[][MAX], int&, int&);
bool KiemTraPhanTuCucTri(float[][MAX], int, int, int, int);
void LietKe(float[][MAX], int, int);

int main()
{
	float a[MAX][MAX];
	int dong, cot;
	NhapMang(a, dong, cot);
	LietKe(a, dong, cot);
	return 0;
}


void NhapMang(float a[][MAX], int& dong, int& cot)
{
	cout << "Nhap so hang: ";
	cin >> dong;
	cout << "Nhap so cot: ";
	cin >> cot;
	for (int i = 0; i < dong; i++)
		for (int j = 0; j < cot; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}
bool KiemTraPhanTuCucTri(float a[][MAX], int sodong, int socot, int dong, int cot)
{
	bool CucTieu = true;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			if (dong + i >= 0 && cot + j >= 0 && dong + i < sodong && cot + j < socot && !(i == 0 && j == 0))
			{
				if (a[dong][cot] > a[dong + i][cot + j])
				{
					CucTieu = false;
				}
				if (!CucTieu) break;
			}
		}
	}
	if (!CucTieu) return false;
	return true;
}
void LietKe(float a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
		for (int j = 0; j < cot; j++)
			if (KiemTraPhanTuCucTri(a, dong, cot, i, j))
				cout << setw(4) << a[i][j];
}