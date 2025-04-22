//맵은 고유한 키를 기반으로 키 - 값 쌍으로 이루어져 있는 정렬된 연관 컨테이너이다. 레드-블랙 트리로 구현
//하나의 키에 중복된 값이 들어갈 수 없다.
//자동으로 오름차순 정렬 아스키코드 순으로 정렬
//대괄호 연산자 []로 해당 키로 직접 참조가 가능

#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;
string a[] = {"주홍철", "이승철", "박종선"};

int main(){
    for(int i=0; i<3; i++){
        mp.insert({a[i], i+1}); //중복되면 무시함 수행안함
        mp[a[i]]=i+1; //값 업데이트
    }
    cout << mp["seongjun"] << '\n';  //이러면 벨류가 0으로 할당이 되는거 아닌가? 맞네
    mp["seongjun"] = 7;
    cout << mp["seongjun"] << '\n';  //재 할당한 7이 출력 만약 insert로 했으면 업데이트 안됐겠지
    cout << mp.size() << "\n";
    mp.erase("seongjun"); //해당 키를 갖는 값 삭제
    auto it = mp.find("seongjun"); //반환하는 값은 이터레이터 이므로 auto
    if (it == mp.end()){
        cout << "없는데?\n";
    }
    mp["seongjun"] = 100;

    it = mp.find("seongjun"); //반환하는 값은 이터레이터 이므로 auto
    if (it != mp.end()){
        cout << (*it).first << " : " << (*it).second << "\n";
    }
    cout << endl;
    for(auto it : mp){
        cout << (it).first << " : " << (it).second << "\n";
    }
    for(auto it = mp.begin(); it !=mp.end(); it++){
        cout << (*it).first << " : " << (*it).second << "\n";
    }


}