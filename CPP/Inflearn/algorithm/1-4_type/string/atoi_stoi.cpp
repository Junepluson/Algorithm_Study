// 문자열 s를 정수 int 로 변환
// s.c_str() 은 string s 를 const char*로 변경
// 문자열? 정수? 판단할때는 atoi
// asc to int
// string to int

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "1";
    string s2 = "seongjun";
    cout << atoi(s.c_str()) << "\n"; //sting to const char* 과정 필요
    cout << atoi(s2.c_str()) << "\n";
    cout << stoi(s) << "\n";
    cout << stoi(s2) << "\n"; // 에러 발생
    return 0;
}