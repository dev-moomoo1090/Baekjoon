#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int ladder[101];
int snake[101];
bool visit[101] ={};
int board[101];

void bfs(int start){
    queue<int> q;
    visit[start] = true;
    q.push(start);
    int count = 0;
    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i < size; i++){
            int now = q.front();
            q.pop();
            if(now == 100){
                cout << count;
                return;
            }
            int D1 = now + 1;
            int D2 = now + 2;
            int D3 = now + 3;
            int D4 = now + 4;
            int D5 = now + 5;
            int D6 = now + 6;

            if(!visit[D1] && D1 < 101){
                visit[D1] = true;
                if(ladder[D1] != -1){
                    q.push(ladder[D1]);
                }
                else if(snake[D1] != -1){
                    q.push(snake[D1]);
                }
                else{
                    q.push(D1);
                }
            }
            if(!visit[D2] && D2 < 101){
                visit[D2] = true;
                if(ladder[D2] != -1){
                    q.push(ladder[D2]);
                }
                else if(snake[D2] != -1){
                    q.push(snake[D2]);
                }
                else{
                    q.push(D2);
                }
            }
            if(!visit[D3] && D3 < 101){
                visit[D3] = true;
                if(ladder[D3] != -1){
                    q.push(ladder[D3]);
                }
                else if(snake[D3] != -1){
                    q.push(snake[D3]);
                }
                else{
                    q.push(D3);
                }
            }
            if(!visit[D4] && D4 < 101){
                visit[D4] = true;
                if(ladder[D4] != -1){
                    q.push(ladder[D4]);
                }
                else if(snake[D4] != -1){
                    q.push(snake[D4]);
                }
                else{
                    q.push(D4);
                }
            }
            if(!visit[D5] && D5 < 101){
                visit[D5] = true;
                if(ladder[D5] != -1){
                    q.push(ladder[D5]);
                }
                else if(snake[D5] != -1){
                    q.push(snake[D5]);
                }
                else{
                    q.push(D5);
                }
            }
            if(!visit[D6] && D6 < 101){
                visit[D6] = true;
                if(ladder[D6] != -1){
                    q.push(ladder[D6]);
                }
                else if(snake[D6] != -1){
                    q.push(snake[D6]);
                }
                else{
                    q.push(D6);
                }
            }
        }
        count++;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,M; cin >> N >> M;

    for(int i = 1; i <101; i++){
        ladder[i] = -1;
        snake[i] = -1;
    }
    while(N--){
        int x,y; cin >> x >> y;
        ladder[x] = y;
    }
    while(M--){
        int x,y; cin >> x >> y;
        snake[x] = y;
    }

    bfs(1);
    
}