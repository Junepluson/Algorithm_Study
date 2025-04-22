//후입선출 LIFO Last in First out
#include <bits/stdc++.h>
using namespace std;

stack<string> stk;

int main(){
    stk.push("홍");
    stk.push("성");
    stk.push("준");
    stk.push("최");
    stk.push("고");
    stk.push("야");
    stk.push("!"); //순서대로 넣었잖아
    while(stk.size()){ //stk 사이즈 동안
        cout << stk.top() << "\n"; //맨 위에 있는거 출력하고
        stk.pop(); //해당 값 삭제
    }

    cout << stk.size();
    return 0;

}