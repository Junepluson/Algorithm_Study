//배열중 가장 크거나 작은 요소를 반환(이터레이트)
//c++ 에서는 알아서 메모리 주소간의 차이를 int형식으로 반환 사실 형식이라기 보다는 4로 나눈거지 보기좋게 
#include<bits/stdc++.h>
using namespace std;

vector<int> a {1,2,3,4,5,6,7,8,9};

int main(){
    int b = *max_element(a.begin(), a.end());
    auto c = max_element(a.begin(), a.end());

    cout << b << " 가장 큰 값 정수변환 " << "\n";
    cout << &*c << " 해당 위치 주소" << "\n";
    cout << (int)(c - a.begin()) << " 순서";
}
