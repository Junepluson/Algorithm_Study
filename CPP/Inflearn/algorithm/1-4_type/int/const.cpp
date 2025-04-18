#include <bits/stdc++.h>
using namespace std;

void printConstRef(const int& x) {
    //x = 100; //에러발생 이미 const x 가 입력이 되어있음 수정 불가
    cout << x;
}

int main()
{
    int x = 10;
    printConstRef(x);

    return 0;
}