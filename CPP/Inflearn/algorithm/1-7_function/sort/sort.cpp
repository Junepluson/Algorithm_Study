// sort(b, b + 5);
// sort(b.begin(), b.end());
#include <bits/stdc++.h>
using namespace std;

int b[5];
vector<int> a;
vector<pair<int,int>> c;

int main()
{

    for (int i = 5; i >= 1; i--)
        b[i - 1] = i;
    for (int i = 5; i >= 1; i--)
        a.push_back(i);

    sort(b, b + 5);
    sort(a.begin(), a.end());

    for(int i : b) cout << i << " ";
    cout << "\n";
    for(int i: a) cout << i << " ";
    cout << "\n";

    sort(b, b + 5, less<int>());
    sort(a.begin(), a.end(), less<int>());

    for(int i : b) cout << i << " ";
    cout << "\n";
    for(int i: a) cout << i << " ";
    cout << "\n";

    sort(b, b + 5, greater<int>());
    sort(a.begin(), a.end(), greater<int>());

    for(int i : b) cout << i << " ";
    cout << "\n";
    for(int i: a) cout << i << " ";
    cout << "\n";

    //pair vector case
    for (int i = 10; i>=1; i--) 
        c.push_back({i,10-i});
    for(auto i : c) cout<< i.first << " : " << i.second << "\n";
    
    sort(c.begin(), c.end());
    for(auto i : c) cout<< i.first << " : " << i.second << "\n";
    //stable sort를 사용하면 중복되었을떄 먼저 입력된걸 앞에 출력할수있다.
    return 0;
}