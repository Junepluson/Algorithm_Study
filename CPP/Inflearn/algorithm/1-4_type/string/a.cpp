#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "love is";
    a += " pain!";                          //+= 를 써서 문자열 또는 문자를 더합니다.
    a.pop_back();                           // 문자열 끝을 지웁니다. O(1)의 시간복잡도를 가집니다.
    cout << a << " : " << a.size() << "\n"; // a.size() 문자열의 사이즈를 반환
    cout << char(*a.begin()) << '\n';       // 반복자가 가르키는 값을 출력하기 위한 *
    cout << char(*(a.end() - 1)) << "\n";

    a.insert(0, "test "); // 0 자리에 추가
    cout << a << " : " << a.size() << "\n";

    a.erase(0, 5); // 0자리부터 5개 삭제
    cout << a << " : " << a.size() << "\n";
    // auto : 컴파일러가 우변의 타입을 자동으로 추론해서 변수 타입을 정해주는 키워드
    auto it = a.find("love"); // 특정 문자열을 찾아 위치를 반환합니다. 만약 해당 문자열을 못 찾을 경우 string::npos를 반환
    cout << typeid(it).name() << "\n"; // 
    if (it != string::npos)
    {
        cout << "포함되어 있다." << "\n";
    }
    cout << it << "\n";           // love 가 맨앞에 있잔슴~
    cout << string::npos << "\n"; // string::npos는 size_t 타입의 최대값을 의미

    cout << a.substr(5, 2) << "\n"; // 특정 위치에서 크기만큼의 문자열을 추출
    
    char b = 'b';
    cout << (int)b << "\n";

    //reverse
    cout << a << "\n";
    reverse(a.begin(), a.end());
    cout << a << "\n";
    return 0;
}