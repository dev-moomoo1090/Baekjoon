#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;
vector<int> arr;
int ans[9];
set<int> s;
bool visit[10001] = {false};

void dfs(int start, int depth, int N, int M){
    if(depth == M){
        for(int i = 0; i < M; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = start; i < N;i++){
        if(!visit[i]){
            ans[depth] = arr[i];
            // s.insert(arr[i]);
            dfs(i, depth + 1, N , M);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M; cin >> N >> M;
    for(int i = 0; i< N; i++){
        int x; cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    auto it = unique(arr.begin(),arr.end());
    arr.erase(it,arr.end());
    N = arr.size();

    dfs(0,0,N,M);
}