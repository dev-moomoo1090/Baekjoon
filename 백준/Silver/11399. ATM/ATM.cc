#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N; cin >> N;
    vector<int> arr;
    int total = 0;
    for(int i = 0; i < N; i++){
        int time; cin >> time;
        arr.push_back(time);
    }
    sort(arr.begin(), arr.end());
    int temp = 0;
    for(int ii = 0; ii < N; ii++){
        total += temp + arr[ii];
        temp += arr[ii];
    }
    cout << total;
}