#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int k; cin >> k;
        if(k!=0)arr.push_back(k);
        else arr.pop_back();
    }
    long long int total = 0;
    for(long long int i : arr){
        total += i;
    }
    cout << total;
}