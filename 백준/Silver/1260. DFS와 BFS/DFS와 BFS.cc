#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> graph(1001);
vector<bool> visited_dfs(1001,false);
vector<bool> visited_bfs(1001,false);
bool isFirstdfs = true;

void dfs(int v){
    visited_dfs[v] = true;
    if(isFirstdfs){
        cout << v;
        isFirstdfs = false;
    }
    else cout << " " << v;

    for(int next : graph[v]){
        if(!visited_dfs[next])
        dfs(next);
    }
    return;
}
void bfs(int start){
    isFirstdfs = true;
    queue<int> q;
    q.push(start);
    visited_bfs[start] = true;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        if(isFirstdfs){
            cout << cur;
            isFirstdfs = false;
        }
        else cout << " " << cur;

        for(int next : graph[cur]){
            if(!visited_bfs[next]){
                visited_bfs[next] = true;
                q.push(next);
            }
        }
    }
}

int main(){
    int N,M,V; cin>> N >> M >> V;
    for(int i = 0; i < M; i++){
        int a,b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 1; i <= N; i++) {
    sort(graph[i].begin(), graph[i].end());
    }
    dfs(V);
    cout << "\n";
    bfs(V);
    return 0;
}