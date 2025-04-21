//정적 배열 선언할 때 크기를 설정 c 스타일로 배울게 Int a[10];
#include<bits/stdc++.h>
using namespace std;

//1차원 배열
int a[3] = {1,2,3};
int b[] = {1,2,3,4};
int c[10];


//2차원 배열 단지 차원을 확장시키면 된다?!
const int mxy = 3;
const int mxx = 4;
int v[mxy][mxx]; //a[3][4]

int main(){
    for(int i: a) cout << i << " ";
    cout << "\n";
    for(int i: b) cout << i << " ";
    cout << "\n";
    for(int i=0; i <10; i++) c[i] = i;
    for(int i: c) cout << i << " ";
    cout << "\n";

    for(int i=0; i<mxy; i++){
        for(int j=0; j<mxx; j++){
            v[i][j] = (i + j);
        }
    }
    for(int i=0; i<mxy; i++){
        for(int j=0; j<mxx; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
