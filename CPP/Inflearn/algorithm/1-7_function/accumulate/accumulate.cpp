//배열의 합을 쉽고 빠르게 구해주는 함수

#include <bits/stdc++.h>
using namespace std;
int a[5] = {1,2,3,4,5};
vector<int> b {1,2,3,4,5}; 

int main(){
     cout << accumulate(&a[0], &a[5], 0) << " 배열의 총 합" << "\n";
    cout << accumulate(b.begin(), b.end(), 0) << " vector의 총합" << "\n";
}