#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,K; cin >> N >> K;
    vector<int> yosepus;    // 1 2 3 .... N 순열
    vector<int> arr;        // 요세푸스 순열
    for(int i = 1;i <= N;i++){  // N순열
        yosepus.push_back(i);
    }
    K -= 1;
    int jump = K;
    int tmepN = N;
    while(yosepus.size()!=0){
        jump %= yosepus.size();    // N순열이 사라질때까지
        int val = *(yosepus.begin() + jump);
        arr.push_back(val);  //추가하기 : K칸뒤에있는 요소
        yosepus.erase(yosepus.begin() + jump); //삭제하기 : K칸 뒤
        tmepN -= 1;
        jump += K;
    }
    cout << "<";
    bool isFirst = true;
    for(int i = 0; i < N; i++){
        if(isFirst){
            cout << arr[i];
            isFirst =false;
        }
        else cout << ", " << arr[i];
    }
    cout << ">";
    return 0;
}
