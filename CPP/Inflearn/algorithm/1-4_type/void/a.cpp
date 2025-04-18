#include <bits/stdc++.h>
using namespace std;

int ret = 1;
double d = 1.2333;

double c()
{
    return 1.2333;
}

void a()
{
    ret = 2;
    cout << ret << "\n";
    return;
}

int main()
{
    a();
    double ret = c();
    cout << ret << "\n";
    cout << d << "\n";
    return 0;
}