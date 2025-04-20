//어떤 값이 나오는 첫번째 또는 초과하는 지검의 위치를 찾기
//정렬 이후 사용해야함

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a {1, 2, 3, 3, 4};
    cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << " 처음으로 나오는 위치" << "\n";
    cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << " 초과하는 위치 마지막 3의 위치 + 1" << "\n";
    cout << &*lower_bound(a.begin(), a.end(),3) << " - 인터레이터를 반환한다." << "\n" ;
    cout << &*a.begin() << " - 인터레이터 begin" << "\n" ;
    cout << *lower_bound(a.begin(), a.end(),3) << "\n";
    cout << *a.begin() ;
    return 0;

}