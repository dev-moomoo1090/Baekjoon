#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
char screen[101][101];
bool visit[101][101] ={};

void bfs(int startX, int startY, int N, char target, char sub){
    queue<pair<int,int>> q;
    q.push({startX, startY});
    visit[startY][startX] = true;
    int count = 1;
    while(!q.empty()){
        pair<int,int> now = q.front();
        q.pop();
        int nx = now.first;
        int ny = now.second;

        if(nx >= 0 && nx < N && ny - 1 >= 0 && ny - 1 < N && !visit[ny - 1][nx] && (screen[ny - 1][nx] == target || screen[ny-1][nx] == sub)){   //상 
            q.push({nx, ny-1});
            count++;
            visit[ny-1][nx] = true;
        }
        if(nx >= 0 && nx < N && ny >= 0 && ny+1 < N && !visit[ny+1][nx] && (screen[ny+1][nx] == target || screen[ny+1][nx] == sub)){   //하
            q.push({nx, ny+1});
            count++;
            visit[ny+1][nx] = true;
        }
        if(nx - 1 >= 0 && nx - 1 < N && ny >= 0 && ny < N && !visit[ny][nx - 1] && (screen[ny][nx - 1] == target || screen[ny][nx-1] == sub)){   //좌
            q.push({nx - 1, ny});
            count++;
            visit[ny][nx - 1] = true;
        }
        if(nx+1 >= 0 && nx+1 < N && ny >= 0 && ny < N && !visit[ny][nx+1] && (screen[ny][nx+1] == target || screen[ny][nx+1] == sub)){ //우
            q.push({nx+1, ny});
            count++;
            visit[ny][nx+1] = true;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    int count1 =0;
    int count2 = 0;
    for(int i = 0;i < N; i++){
        string s; cin >> s;
        for(int j=0;j < N; j++){
            screen[i][j] = s[j];
        }
    }

    for(int i = 0; i < N; i++){         //비색맹
        for(int j = 0; j < N; j++){
            if(screen[i][j] == 'R' && !visit[i][j]){bfs(j,i,N,'R','R'); count1++;}
            if(screen[i][j] == 'G' && !visit[i][j]){bfs(j,i,N,'G','G'); count1++;}
            if(screen[i][j] == 'B' && !visit[i][j]){bfs(j,i,N,'B','B'); count1++;}
        }
    }
    memset(visit, false, sizeof(visit));
    for(int i = 0; i < N; i++){         //색맹
        for(int j = 0; j < N; j++){
            if(screen[i][j] == 'R' && !visit[i][j]){bfs(j,i,N,'R','G'); count2++;}
            if(screen[i][j] == 'G' && !visit[i][j]){bfs(j,i,N,'G','R'); count2++;}
            if(screen[i][j] == 'B' && !visit[i][j]){bfs(j,i,N,'B','B'); count2++;}
        }
    }
    
    cout << count1 << " " << count2;
}