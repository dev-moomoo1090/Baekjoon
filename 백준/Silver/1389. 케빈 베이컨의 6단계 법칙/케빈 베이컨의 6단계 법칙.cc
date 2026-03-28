#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

using namespace std;
vector<vector<int>> graph(102);

map<pair<int,int>,int> dist;

void bfs(int start){
    queue<vector<int>> q;
    bool visit[102] = {false};
    int count = 0;
    q.push(graph[start]);
    visit[start] = true;

    while(!q.empty()){
        count++;
        int size = q.size();
        for(int i = 0; i < size; i++){
            vector<int> now = q.front();
            q.pop();

            for(int next : now){
                if(!visit[next]){
                    q.push(graph[next]);
                    dist.emplace(make_pair(start,next),count);
                    visit[next] = true;
                }
            }
        }
    }
}

int main(){
    int n,m; cin >> n >> m;
    int ans = 0;
    int min = 10000000;
    for(int i = 0; i < m; i++){
        int a,b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a); 
    }

    for(int i = 1; i <= n; i++){
        bfs(i);
        int temp = 0;
        for(int j = 1; j<= n; j++){
            temp += dist[{i,j}];
        }
        if(min > temp){
            min = temp;
            ans = i;
        }
    }

    cout << ans;
}