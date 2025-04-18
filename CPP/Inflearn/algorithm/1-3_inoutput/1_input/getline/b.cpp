#include <bits/stdc++.h>
using namespace std;

string s;
int main(){
    getline(cin, s);
    cout << s << '\n';
    return 0;
}
/*
엄준식 화이팅
엄준식 화이팅

getline()은 기본적으로 개행 문자 ('\n')를 줄의 끝으로 인식하고 그 개행 문자직전까지 입력을 받습니다.
만약 다른 종결 문자를 사용하고 싶다면, 이를 세 번째 인자로 전달하면 됩니다.
예를 들어 . 을 끝으로 인식하고 싶다면 다음과 같이 쓰면 됩니다.
getline(cin, line,'.');
*/