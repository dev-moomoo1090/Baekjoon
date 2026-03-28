#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int>& a, pair<int, int>&b){
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
int main(){
    int n; cin >> n;
    vector<pair<int, int>> points;
    int x, y;
    for(int i= 0; i < n;i++){
        cin >> x >> y;
        points.push_back({x,y});
    }
    sort(points.begin(),points.end(),compare);
    for(int i = 0; i<n;i++){
        int cx = points[i].first, cy = points[i].second;
        cout << cx << " " << cy << "\n";
    }
    return 0;
}