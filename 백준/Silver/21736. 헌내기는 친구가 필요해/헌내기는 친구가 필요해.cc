#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int visit[601][601] = {false};
char cam[601][601];

void bfs(pair<int,int> start,int n, int m){
    queue<pair<int,int>> q;
    int x = start.first;
    int y = start.second;
    int count = 0;
    q.push(start);
    visit[y][x] = true;
    
    while(!q.empty()){
        pair<int,int> now = q.front();
        int nx = now.first;
        int ny = now.second;
        q.pop();

        if(nx >=0 && nx < m && ny - 1 >= 0 && ny - 1 < n && !visit[ny-1][nx] && cam[ny-1][nx] != 'X'){  //상
            q.push({nx,ny-1});
            visit[ny-1][nx] = true;
            if(cam[ny-1][nx] == 'P') count++;
        }
        if(nx >=0 && nx < m && ny + 1 >= 0 && ny + 1 < n && !visit[ny+1][nx] && cam[ny+1][nx] != 'X'){ //하
            q.push({nx,ny+1});
            visit[ny+1][nx] = true;
            if(cam[ny+1][nx] == 'P') count++;
        }
        if(nx - 1 >=0 && nx - 1 < m && ny >= 0 && ny < n && !visit[ny][nx - 1] && cam[ny][nx - 1] != 'X'){ //좌
            q.push({nx - 1,ny});
            visit[ny][nx - 1] = true;
            if(cam[ny][nx - 1] == 'P') count++;
        }
        if(nx + 1 >=0 && nx + 1 < m && ny >= 0 && ny < n && !visit[ny][nx + 1] && cam[ny][nx + 1] != 'X'){ //우
            q.push({nx + 1,ny});
            visit[ny][nx + 1] = true;
            if(cam[ny][nx + 1] == 'P') count++;
        }
    }
    if(count == 0){
        cout << "TT"; return;
    }
    cout << count;
}

int main(){
    int N,M; cin >> N >> M;
    pair<int,int> start;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> cam[i][j];
            if(cam[i][j] == 'I') start = {j,i};
        }
    }
    bfs(start,N,M);
}