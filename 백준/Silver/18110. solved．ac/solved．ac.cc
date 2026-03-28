#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        arr.push_back(k);
    }
    int fifteenPer = round(n * (15.0/100));
    int start = fifteenPer;
    int end = arr.size() - fifteenPer;
    int total = 0;
    sort(arr.begin(),arr.end());
    if(n!=0){
        for(int i = start; i < end; i++){
            total += arr[i];
        }
        total = round((double)total / (arr.size() - (fifteenPer * 2)));
    }
    else
        total = 0;
    cout << total;
}