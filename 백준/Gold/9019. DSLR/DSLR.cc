#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
bool visit[10000] ={};
int node[10000];
int pre[10000];
char cmd[10000];
void bfs(int start, int end){
    memset(visit,false,sizeof(visit));
    memset(pre, 0, sizeof(pre));
    queue<int> q;
    q.push(start);
    visit[start] = true;
    pre[start] = -1;
    
    while(!q.empty()){
        int now = q.front();
        q.pop();
        if(now == end){
            string s = "";
            int index = now;
            while(true){
                s += cmd[index];
                index = pre[index];
                if(pre[index] == -1){
                    reverse(s.begin(),s.end());
                    cout << s << "\n";
                    break;
                }
            }
        }
        int D = (now*2) % 10000;
        int S = (now==0) ? 9999 : now - 1; 
        int L = (now%1000) * 10 + (now/1000);
        int R = (now % 10) * 1000 + (now/10);
        if(!visit[D]){
            visit[D] = true;
            q.push(D);
            pre[D] = now;
            cmd[D] = 'D';
        }
        if(!visit[S]){
            visit[S] = true;
            q.push(S);
            pre[S] = now;
            cmd[S] = 'S';
        }
        if(!visit[L]){
            visit[L] = true;
            q.push(L);
            pre[L] = now;
            cmd[L] = 'L';
        }
        if(!visit[R]){
            visit[R] = true;
            q.push(R);
            pre[R] = now;
            cmd[R] = 'R';
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;
    for(int i = 0; i < 10000;i++){
        node[i] = i+1;
    }

    while(T--){
        int start, end; cin >> start >> end;
        bfs(start,end);
    }
}