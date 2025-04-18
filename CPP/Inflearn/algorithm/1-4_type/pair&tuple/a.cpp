#include <bits/stdc++.h>
using namespace std;

pair<int, int> pi;
tuple<int, int, int> tl;

int a, b, c;

int main(){
    pi = {11,2};
    tl = {1,3,3};

    tie(a,b) = pi;
    cout << a << " : "<< b << "\n";
    tie(a,b,c) = tl;
    cout << a << " : "<< b << " : "<< c <<"\n";
    return 0;
}