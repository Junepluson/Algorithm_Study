//연결 리스트 랜덤 접근 x 오로지 순차적 접근
//싱글연결리스트, 이중연결리스트, 원형연결리스트(싱글, 이중)

#include <bits/stdc++.h>
using namespace std;

list<int> a;

void print(list <int> a){
    for(auto it:a) cout << it << " ";
    cout << '\n';
}

int main(){
    for(int i=1; i<=3; i++)a.push_back(i);
    print(a);
    for(int i =1; i<=3; i++)a.push_front(i);
    print(a);
    auto it = a.begin(); it++; //it는 auto자료형이고 +1  된거겠지 
    cout << *it; //it는 주소값 즉 이터레이터를 반환하므로 위에서 플러스 1 을 한거는 다음 주소를 반환하는 것
    cout <<"\n";
    a.insert(it, 1000); //it 자리에 1000을 넣는거지. 그래서 원래2 자리에 1000이 들어감
    print(a);

    it = a.begin(); it++; //it는 auto자료형이고 +1  된거겠지 
    a.erase(it);
    print(a);

    a.pop_front();
    print(a);
    
    a.pop_back();
    print(a);

    a.clear();
    print(a);

    return 0;
}