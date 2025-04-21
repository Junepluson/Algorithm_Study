/*
vector는 동적으로 요소를 할당할 수 있는 동적 배열
컴파일 시점에 사용할 요소들의 개수를 모르면 벡터를 사용해야함
vector<int> a;
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> v;
vector<int> c(5, 100);
vector<int> d = {1, 2, 3, 4, 5, 6};

vector<vector<int>> a; // 벡터안에 벡터가 들어가 있는 2차원 배열타입 선언 (안에 벡터는 넣어줘야함)
vector<vector<int>> a2(10, vector<int>(10, 0)); //2차원 배열타입 벡터 선언 후 10행에 벡터 넣고 해당 벡터에 10열 10*10
vector<vector<int>> a3[10]; //2타원 배열타입에 빈 배열 10개를 넣는다.

int main()
{
    for(int i=1; i<=10; i++) v.push_back(i);  //맨뒤에 차례로 추가
    for(int i : v) cout << i << " ";
    cout << "\n";

    v.pop_back(); //맨 뒤에 삭제
    for(int i : v) cout << i << " ";
    cout << "\n";


    v.erase(v.begin(), v.begin()+3); //지정한 위치 삭제
    for(int i : v) cout << i << " ";
    cout << "\n";

    auto a = find(v.begin(), v.end(), 100); //3번째 인수값 찾기
    if(a==v.end()) cout <<"not fount 100 in vector v." << "\n"; //만약 맨 뒤 까지 갔는데 못찾으면 문자열 출력

    fill(v.begin(), v.end(), 10); //모든 값을 10으로 넣겠다. 초기화
    for(int i : v) cout << i << " ";
    cout << "\n";

    //cout << max(7, v.size()) << endl;
    cout << max (-1, (int)v.size()) << endl; 
    //음수(상관없이 항상) 비교(사용)시 명시적 형변환 (int) 해줘야한다. 왜냐하면 size_t 형식으로 변환되면서 정수가 엄청 커지네


    v.clear(); //전체 초기화
    cout << "nothing now?" << "\n";
    for(int i : v) cout << i << " ";
    cout << "\n";

    cout << (int)v.size() << endl;


    return 0;
}