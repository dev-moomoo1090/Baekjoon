#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int m,n; cin >> m >> n;
    vector<vector<int>> v(n,vector<int>(m,0));
    queue<pair<int,int>> q;
    int size = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int input; cin >> input;
            v[i][j] = input;
            if(input == 1){
                pair<int,int> temp = {j,i};
                q.push(temp);
            }
        }
    }

    while(!q.empty()){
        size = q.size();
        for(int i = 0; i < size; i++){
            pair<int,int> x_y = q.front();
            q.pop();

            int x = x_y.first;
            int y = x_y.second;

            if(x >= 0 && x < m && y - 1 >= 0 && y -1 < n && v[y-1][x] == 0){ //상 범위,방문 검사
                v[y-1][x] = 1;
                q.push({x,y-1});
            }
            if(x >= 0 && x < m && y + 1 >= 0 && y+1 < n && v[y+1][x] == 0){ //하 범위,방문 검사
                v[y+1][x] = 1;
                q.push({x,y+1});
            }
            if(x - 1>= 0 && x - 1< m && y >= 0 && y < n && v[y][x-1] == 0){ //좌 범위,방문 검사
                v[y][x - 1] = 1;
                q.push({x - 1,y});
            }
            if(x + 1>= 0 && x + 1< m && y >= 0 && y < n && v[y][x+1] == 0){ //우 범위,방문 검사
                v[y][x + 1] = 1;
                q.push({x + 1,y});
            }
            
        }
        if(!q.empty()) count++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == 0){cout << -1; return 0;}
        }
    }
    cout << count;
}