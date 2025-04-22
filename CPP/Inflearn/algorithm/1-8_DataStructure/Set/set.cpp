//셋은 고유한 요소만을 저장하는 컨테이너
//중복을 허용하지 않는다.
//Pair, int type으로 만들수 있음
//map과 같이 아스키 기반 자동 정렬이 되고 메소드도 동일하다.

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<pair<string, int>> st;
    st.insert({"test", 1});
    st.insert({"test", 1});
    st.insert({"test", 1});
    st.insert({"test", 1});
    cout << "case1 : " << endl;
    cout << st.size() << "\n"; // 위에서 어차피 중복된 값을 넣었으므로 사이즈는 1

    cout << "case2 : " << endl; 
    set<int> st2;
    st2.insert(1);
    st2.insert(2);
    st2.insert(1);
    for(int i : st2) cout << i << "\n"; //여기서도 중복된거 안받아서 1,2만 출력 순서는 아스키코드 기반

    return 0;

}