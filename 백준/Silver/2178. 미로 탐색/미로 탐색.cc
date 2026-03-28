#include <iostream>
#include <vector>
#include <queue>
using namespace std;
char arr[101][101];
bool visit[101][101] = {false};
int counter[101][101];
void bfs(int n,int m){
    queue<pair<int,int>> q;
    q.push({0,0});
    visit[0][0] = true;
    int count = 0;

    while(!q.empty()){
        count++;
        int size = q.size();
        for(int i = 0; i < size; i++){
            pair<int,int> now = q.front();
            q.pop();
            int nx = now.first;
            int ny = now.second;

        if(nx >=0 && nx < m && ny - 1 >= 0 && ny - 1 < n && !visit[ny-1][nx] && arr[ny-1][nx] != '0'){  //상
            q.push({nx,ny-1});
            visit[ny-1][nx] = true;
            counter[ny-1][nx] = count+1;
        }
        if(nx >=0 && nx < m && ny + 1 >= 0 && ny + 1 < n && !visit[ny+1][nx] && arr[ny+1][nx] != '0'){ //하
            q.push({nx,ny+1});
            visit[ny+1][nx] = true;
            counter[ny+1][nx] = count+1;
        }
        if(nx - 1 >=0 && nx - 1 < m && ny >= 0 && ny < n && !visit[ny][nx - 1] && arr[ny][nx-1] != '0'){ //좌
            q.push({nx - 1,ny});
            visit[ny][nx - 1] = true;
            counter[ny][nx-1] = count+1;
        }
        if(nx + 1 >=0 && nx + 1 < m && ny >= 0 && ny < n && !visit[ny][nx + 1] && arr[ny][nx+1] != '0'){ //우
            q.push({nx + 1,ny});
            visit[ny][nx + 1] = true;
            counter[ny][nx+1] = count+1;
        }
        }
    }

    cout << counter[n-1][m-1];
}

int main(){
    int N,M; cin >> N >> M;

    for(int i = 0; i < N; i++){
        string n;
        cin >> n;
        for(int j = 0; j < M; j++){
            arr[i][j] = n[j];
        }
    }

    bfs(N,M);
}