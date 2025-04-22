//중복되는 요소도 집어넣을 수 있는 자료구조

#include <bits/stdc++.h>
using namespace std;
multiset<int> s;

int main(){
    for(int i=1; i<= 5; i++){
        s.insert(i);
        s.insert(i);
    }
    for(int i: s) cout << i << " ";
    cout << endl;

    s.insert(2);
    cout << " 빈도수를 셀때 사용하기도 함" << "\n";
    int count_2 = s.count(2);
    cout << count_2 << ": 2의 빈도수" << endl;
    return 0;
}