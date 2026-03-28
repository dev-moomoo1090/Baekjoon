#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;
vector<vector<int>> table(101,vector<int>(101,0));
int bfs(int start, int target, int N){
    queue<int> q;
    bool visit[101] = {false};
    q.push(start);
    visit[start] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int x = 0; x < N; x++){
            if(table[node][x] == 1 && x == target) return 1;
            if(table[node][x] == 1 && !visit[x]){
                visit[x] = true;
                q.push(x);
            }
        }
    }
    return 0;
}
int main(){
    int N; cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int v; cin >> v;
            table[i][j] = v;
        }
    }
    vector<vector<int>> ans(N, vector<int>(N,0));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            ans[i][j] = bfs(i,j,N);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(j == N-1) cout << ans[i][j];
            else cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}