//queue와 달리 앞뒤로 삽입, 삭제, 참조가 가능한 자료구조

#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

int main(){
    dq.push_front(1);
    dq.push_back(2);
    dq.push_back(3);
    for(int i: dq) cout << i << " ";
    cout << "\n\n";
    cout << dq.front() << "\n";
    cout << dq.back() << "\n";
    cout << dq.size() << "\n";
    for(int i: dq) cout << i << " ";
    cout << "\n\n";
    dq.pop_back();
    dq.pop_front();
    cout << dq.size() << "\n";
    for(int i: dq) cout << i << " ";
    cout << "\n";
    return 0;
}