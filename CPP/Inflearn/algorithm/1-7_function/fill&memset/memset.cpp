#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int b[10][10];

    // memset(name, val, size)
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    memset(b, 0, sizeof(b));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}