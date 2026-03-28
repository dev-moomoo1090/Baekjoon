#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int,int>& a, const pair<int,int>& b){
    if(a.second != b.second) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    vector<pair<int,int>> arr;
    int n; cin >> n;
    for(int i = 0; i< n; i++){
        int x,y; cin >> x >> y;
        arr.push_back({x,y});
    }
    sort(arr.begin(),arr.end(),compare);

    for(int i = 0; i < n; i++){
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
}