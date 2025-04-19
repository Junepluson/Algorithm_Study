#include <bits/stdc++.h>
using namespace std;

int i;
string s = "seongjun";

int main()
{
    int *a = &i;
    cout << a << "\n";
    string *x = &s;
    cout << x << "\n";
    cout << *x << "\n";        // 역참조 연산자
    cout << sizeof(x) << "\n"; // 포인터의 크기는 항상 동일하다 64bit 이므로 8byte

    int w[3]={6, 2, 3};
    int *q = w;

    cout << &w[0] << "\n";
    cout << q << "\n";
    cout << &w[1] << "\n";
    cout << q + 1 << "\n";
    cout << w[0] << "\n";
    cout << *q << "\n"; // 배열도 역참조 연산자 되네

    for (i=0; i<3; i++){
        cout << w[i] << "\n";
    }

    return 0;
}