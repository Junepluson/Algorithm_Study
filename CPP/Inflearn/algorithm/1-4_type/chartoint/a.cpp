#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "123456";

    vector<int> digits;

    for(int i =0; i< s.length(); i++){
        int digit = s[i]-'0'; // '1'-'0' = int 1
        //char digit2 = s[i]-'0';
        cout << digit << "\n";
        digits.push_back(digit); //숫자를 벡터에 넣어 순서대로
    }
    cout << "문자열을 개별 숫자로 변환한 결과: \n";
    for(int i =0; i < digits.size(); i++){
        cout << digits[i] << " ";
    }
    return 0;
}