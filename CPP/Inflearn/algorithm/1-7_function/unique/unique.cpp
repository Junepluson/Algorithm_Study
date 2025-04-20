// unique는 범위안의 있는 요소 중 앞에서부터 서로를 비교해가며 중복되는 요소를 제거하고
// 나머지 요소들은 삭제하지 않고 그대로 두는 함수
//unique(a.begin(), a.end())
//-> 중복되지 않은 요소로 채운뒤에, *그 다음 이터레이터(주소)를 반환
// 또한 붙어 있을때 중복을 캐치하므로 sort를 통해 정렬하고, 반환되는 이터레이트 주소를 사용하여 해당 주소부터 끝까지 삭제
//a.erase(a.begin(), a.end());
// 결국 s.erase(unique(s.begin(), s.end()), s.end());
// 이후 s 출력하면 정렬+중복x

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> s {4, 3, 3, 5, 1, 2, 3};
    for(auto i : s) cout << i << " ";
    cout << "\n";
    s.erase(unique(s.begin(), s.end()), s.end());
    for(auto i : s) cout << i << " ";
    cout << "\n";
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    for(auto i : s) cout << i << " ";

    return 0;
}