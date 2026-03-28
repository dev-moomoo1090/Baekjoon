#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N,K; cin >> N >> K;
    vector<int> vals;
    for(int i = 0; i< N; i++){
        int val; cin >> val;
        vals.push_back(val);
    }
    int i = 0;
    int count = 0;
    sort(vals.begin(),vals.end(), greater<int>());
    while(K != 0){
        int temp = K / vals[i];
        count += temp;
        K -= temp * vals[i];
        i++;
    }
    cout << count;
}