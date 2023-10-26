#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define maxx 25
using namespace std;
int main()
{
    srand(time(NULL));
    int b[maxx * maxx], a[maxx][maxx], i, j, n = 10;
    for (i = 0; i < n * n; ++i)
        b[i] = rand() % 100;
    int temp;
    for (i = 0; i < n * n - 1; ++i)
        for (j = i + 1; j < n * n; ++j)
            if (b[i] > b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
 }
 cout << "Ma tran duoc tao ngau nhien va sap xep:";
    for (i = 0; i < n * n; ++i)
 {
        if ((i % n) == 0) cout << endl;
        cout << setw(4) << b[i];
 }
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j) 
            a[i][j] = 0;
    //Chuyen thanh ma tran zig zig cheo 
    i = 0;
    j = 0;
    int k = 0;
    for (int e = 0; e < n - 1; ++e) {
        if (j < n) 
            a[i][j] = b[k++];
        ++j;
        while (j > 0) {
            if ((i < n) && (j < n)) a[i][j] = b[k++];
            ++i; --j;
        }
        if (i < n) a[i][j] = b[k++];
        ++i;
        while (i > 0) {
            if ((i < n) && (j < n)) a[i][j] = b[k++];
            --i; ++j;
        }
    }
    cout << "\nMa tran zig zag cheo :";
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) cout << setw(4) << a[i][j];
            cout << endl;
        }
    return 0;
}