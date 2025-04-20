#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int b[10][10];
    int c[10];
    int d[10][10];
    //fill(first, last, val)
    fill(&a[0], &a[10], 2);

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n";

    fill(c, c + 10, 3);

    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }
    cout << "\n";

    fill(&b[0][0], &b[9][10], 2);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    fill (&d[0][0], &d[0][0] + 10*10, 3);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;

}