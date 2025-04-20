#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[3] = {4,5,6};
    int ret[3];

    //memcpy(target, saurce, size);
    // doesn't work at vector  
    memcpy(ret, v, sizeof(v));
    for(int i : ret) cout << i <<" ";
    cout << "\n";
    ret[0] = 2;
    for(int i : ret) cout << i <<" ";
    cout << "\n";
    for(int i : v) cout << i << " ";

    return 0;
}