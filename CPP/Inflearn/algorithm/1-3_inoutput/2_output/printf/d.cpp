#include <bits/stdc++.h>
using namespace std;

int a = 1;
char s = 'a';
string str = "어벤져스";
double b = 1.223123;

int main(){
    printf("아이엠어 아이언맨 : %d\n",a);
    printf("아이엠어 아이언맨 : %c\n",s);
    printf("아이엠어 아이언맨 : %s\n",str.c_str());
    printf("아이엠어 아이언맨 : %lf\n",b);
    return 0;
}
/*
아이엠어 아이언맨 : 1
아이엠어 아이언맨 : a
아이엠어 아이언맨 : 어벤져스
아이엠어 아이언맨 : 1.223123

string str을 출력할 때는 c
_
str() 함수를 걸어서 출력하고 있는데
문자열을 printf로 출력할 때 주의할 점입니다.
printf 를 기반으로 문자열을 출력하려면 string을 문자열에 대한 포인터(char *) 타입으로
바꿔주어야 하기 때문입니다.(그래서 보통 문자열을 출력할 때는 간단히 cout을 사용하는
것이 좋습니다.)
*/