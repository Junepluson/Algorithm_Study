//먼저 넣은 데이터가 먼저 나오는 성질인 선입선출 FIFO First in First out

#include <bits/stdc++.h>
using namespace std;

queue<int> q;
queue<string> qs;

int main(){
    for(int i =0; i <=5; i++){
        q.push(i);
    }
    while(q.size()){
        cout << q.front() << " "; //앞에서 부터 출력 선입 선출
        q.pop();
    }
    cout << "\n";
    cout << q.size() <<"\n";

    cout << "\nhow about string case? : " <<"\n";
    qs.push("홍");
    qs.push("성");
    qs.push("준");
    qs.push("화");
    qs.push("이");
    qs.push("팅");

    cout << qs.size() << "\n";
    while(qs.size()){
        cout << qs.front() << " "; //앞에서 부터 출력 선입 선출
        qs.pop();
    }   
    cout << "\n";
    cout << qs.size() << "\n";
    return 0;
}