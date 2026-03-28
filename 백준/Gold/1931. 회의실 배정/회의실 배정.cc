#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    int N; cin >> N;
    int s = N;
    vector<pair<int,int>> vec;
    int count = 0;
    int cri = 0;
    while(N--){
        int a,b; cin >> a >> b;
        pair<int,int> p = {a,b};
        vec.push_back(p);
    }

    sort(vec.begin(), vec.end(), [](const pair<int,int>& a, const pair<int,int>& b){
        if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    for(int i = 0; i < s; i++){
        if(cri <= vec[i].first){
            count++;
            cri = vec[i].second;
        }
    }
    cout << count;
}