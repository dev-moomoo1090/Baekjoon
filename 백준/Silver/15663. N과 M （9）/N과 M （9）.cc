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
bool visited[10001] = {false};

void dfs(int start, int depth, int N, int M){
    set<int> s;
    if(depth == M){
        for(int i = 0; i < M;i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = start; i < N; i++){
        if(!visited[i] && !s.count(arr[i])){
            visited[i] = true;
            ans[depth] = arr[i];
            s.insert(arr[i]);
            dfs(start ,depth+1, N, M);
            visited[i] = false;
        }
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M; cin>>N>>M;
    for(int i =0; i < N; i++){
        int k; cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());
    // auto it = unique(arr.begin(), arr.end());
    // arr.erase(it, arr.end());
    // N = arr.size();
    dfs(0,0,N,M);
    return 0;
}