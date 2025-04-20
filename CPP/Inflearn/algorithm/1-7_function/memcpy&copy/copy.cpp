#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v {1,2,3};
    vector<int> ret(3);
    //copy(a.begin(), a.end(), b.begin());
    copy(v.begin(), v.end(), ret.begin());
    for(int i : v) cout << i << " ";
    cout << "\n";
    v[2] = 1;
    for(int i : v) cout << i << " ";
    cout << "\n";
    for(int i : ret) cout << i << " ";
    cout << "\n";

    int a[3]= {4,5,6};
    int vet[3];

    copy(a, a + 3, vet);
    for(int i : vet) cout << i << " ";
    return 0;

}