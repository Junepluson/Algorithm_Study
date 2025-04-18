#include <bits/stdc++.h>
using namespace std;

int b[] = {0,1,2,3,4,5};
int n;

int main()
{
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i : a)
    {
        cout << i << " ";
    }

    return 0;
}

/*
Array a가 n을 입력을 받고 int a[n]로 선언하게 되면 범위기반 for
루프를 쓰면 에러가 발생될 수 있습니다. 이는 C++ 표준에서는 VLA를 지원하지 않지만
일부 컴파일러(GCC 등)는 확장 기능으로 VLA를 지원할 수 있기 때문
*/