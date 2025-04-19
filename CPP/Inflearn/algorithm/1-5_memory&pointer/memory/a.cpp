#include <bits/stdc++.h>
using namespace std;

int i;
int main()
{
    cout << &i << "/n";
    i = 0;
    cout << &i << "/n"; //same
    return 0;
}