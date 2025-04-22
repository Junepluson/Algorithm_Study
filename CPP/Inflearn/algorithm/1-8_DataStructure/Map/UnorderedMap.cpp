//정렬되지 않은 맵
//해시테이블 기반
// 정렬이 필요하지 않으면 좋은거 아니야? 하지만 최악의 경우에는 O(n) 타임이 소요 왠만하면 map

#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> umap;

int main(){
    umap["asd"] = 1;
    umap["sdd"] = 1;
    umap["gsd"] = 1;
    for(auto it : umap) {
        cout << it.first << " : " << it.second << "\n";
    }
} //딱히 정렬되지 않는 출력을 보여준다.