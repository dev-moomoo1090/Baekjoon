#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
bool visit[26][26] = {false};
char arr[26][26];

int bfs(pair<int,int> start, int n){
    queue<pair<int,int>> q;
    q.push(start);
    visit[start.second][start.first] = true;
    int count = 0;

    while(!q.empty()){
        pair<int,int> now = q.front();
        q.pop();
        count++;
        int nx = now.first;
        int ny = now.second;

        if(nx >=0 && nx < n && ny - 1 >= 0 && ny - 1 < n && !visit[ny-1][nx]&& arr[ny-1][nx] == '1'){  //상
            q.push({nx,ny-1});
            visit[ny-1][nx] = true;
        }
        if(nx >=0 && nx < n && ny + 1 >= 0 && ny + 1 < n && !visit[ny+1][nx]&& arr[ny+1][nx] == '1'){ //하
            q.push({nx,ny+1});
            visit[ny+1][nx] = true;
        }
        if(nx - 1 >=0 && nx - 1 < n && ny >= 0 && ny < n && !visit[ny][nx - 1]&& arr[ny][nx-1] == '1'){ //좌
            q.push({nx - 1,ny});
            visit[ny][nx - 1] = true;
        }
        if(nx + 1 >=0 && nx + 1 < n && ny >= 0 && ny < n && !visit[ny][nx + 1]&& arr[ny][nx+1] == '1'){ //우
            q.push({nx + 1,ny});
            visit[ny][nx + 1] = true;
        }
    }

    return count;
}
int main(){
    int N; cin >> N;
    vector<int> ans;
    for(int i = 0; i < N; i++){
        string s; cin >> s;
        for(int j = 0; j < N; j++){
            arr[i][j] = s[j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!visit[i][j] && arr[i][j] == '1'){
                int val = bfs({j,i},N);
                ans.push_back(val);
            }
        }
    }

    sort(ans.begin(), ans.end(),[](int a, int b){
        return a < b;
    });

    cout << ans.size() << "\n";
    for(int v : ans){
        cout << v << "\n";
    }
}