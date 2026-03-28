#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
bool visit[501][501] ={};
int board[501][501];
int ans = 0;
void dfs(int x, int y, int depth, int sum, int M, int N){
    if(depth == 4){
        ans = max(ans, sum);
        return;
    }

    for(int i =0; i < 4; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];

        if(nx >= 0 && nx < M && ny >= 0 && ny < N && !visit[ny][nx]){
            visit[ny][nx] = true;
            dfs(nx,ny,depth+1,sum + board[ny][nx],M,N);
            visit[ny][nx] = false;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,M; cin >> N >> M;

    for(int i =0;i < N;i++){
        for(int j = 0; j < M; j++){
            cin >> board[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            visit[i][j] =true;
            dfs(j,i,1,board[i][j],M,N);
            visit[i][j] = false;
            if(i + 1 < N && j + 2 < M)
                ans = max(ans,board[i][j]+board[i][j+1]+board[i+1][j+1]+board[i][j+2]);
            if(i > 0 && j + 2 < M)
                ans = max(ans,board[i][j]+board[i][j+1]+board[i-1][j+1]+board[i][j+2]);
            if(i + 2 < N && j + 1 < M)
                ans = max(ans,board[i][j]+board[i+1][j]+board[i+2][j]+board[i+1][j+1]);
            if(i + 2 < N && j > 0)
                ans = max(ans,board[i][j]+board[i+1][j]+board[i+2][j]+board[i+1][j-1]);

        }
    }
    cout << ans;
}