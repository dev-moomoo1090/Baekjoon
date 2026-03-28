#include <bits/stdc++.h>
using namespace std;
const int dx[4] = {1,-1,0,0};
const int dy[4] = {0,0,1,-1};
void dfs(int y, int x, vector<vector<int>>& board, vector<vector<bool>>& visited, int N, int M){
    visited[y][x] = true;
    for(int temp = 0; temp < 4; temp++){
        int nx = x + dx[temp];
        int ny = y + dy[temp];
        if(nx >= 0 && nx < M && ny >= 0 && ny < N && board[ny][nx] == 1 && !visited[ny][nx]){
            dfs(ny,nx,board,visited,N,M);
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    while(T--){
        int M, N, K; cin >> M >> N >> K;
        vector<vector<int>> board(N,vector<int>(M,0));
        vector<vector<bool>> visited(N,vector<bool>(M,false));
        for(int i = 0; i < K; i++){
            int y,x; cin >> x >> y;
            board[y][x] = 1;
        }
        int worm = 0;
        for(int y = 0; y < N; y++){
            for(int x = 0; x < M; x++){
                if(board[y][x] == 1 && !visited[y][x]){
                    dfs(y,x,board,visited,N,M);
                    worm++;
                }
            }
        }
        cout << worm << "\n";
    }
}