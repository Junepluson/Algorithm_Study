#include <iostream>
using namespace std;

int main(){
    char my_string[] = "Hello\0, World!" ;
    //문자열을 한 글자씩 출력
    //cout << my_string << endl; 사용 안하기
    // sizeof(), '\0', break    hint
    for ( int i = 0; my_string[i] != '\0'; i++)
    {
        cout << my_string[i];
    }
    cout << endl;
}