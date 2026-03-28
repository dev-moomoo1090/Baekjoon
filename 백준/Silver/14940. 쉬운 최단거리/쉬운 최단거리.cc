#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> d2(N,vector<int>(M,-1));
    queue<vector<int>> q;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int input; cin >> input;
            if(input == 2){
                q.push({i,j});
                d2[i][j] = 0;
            }
            else if(input == 1) d2[i][j] = -1;
            else d2[i][j] = 0;
        }
    }

    while(!q.empty()){
        vector<int> v = q.front();
        q.pop();
        int y = v[0];
        int x= v[1];

        vector<vector<int>> next = {
            {y-1,x}, 
            {y+1,x}, 
            {y,x-1}, 
            {y, x+1}
        };
        for(int i = 0; i < 4; i++){
            vector<int> nv = next[i];
            int nx = nv[1];
            int ny = nv[0];

            if(nx >= 0 && nx < M && ny >= 0 && ny < N && d2[ny][nx] == -1){
                d2[ny][nx] = d2[y][x] + 1;
                q.push({ny,nx});
            }
        }
    }

    for(int i =0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(j == M-1) cout << d2[i][j];
            else cout << d2[i][j] << " ";
        }
        cout << "\n";
    }
}