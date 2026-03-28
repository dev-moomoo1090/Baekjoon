#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> graph(101);
vector<bool> visited(101,false);
int infected = 0;

void dfs(int v){
    visited[v] = true;
    for(int next : graph[v]){
        if(!visited[next]){
            infected++;
            dfs(next);
        }
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    cout << infected;
}