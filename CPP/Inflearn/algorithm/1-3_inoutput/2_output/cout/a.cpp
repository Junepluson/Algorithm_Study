#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
double a = 1.23456789;

int main(){
    cout << a << '\n';
    cout << fixed << setprecision(3) << a << "\n";
    cout << fixed << setprecision(8) << a << "\n";
    return 0;
}

//cout 은 실수를 출력하면 일부분만 출력된다.
//소수점 특정 자리까지 출력하기 위해 Fixed << setprecision(자릿수)를 사용
//typedef는 왜 해준건지 모르겠네?