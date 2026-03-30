#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M; cin >> N >> M;
    vector<vector<int>> matrix(N,vector<int>(N,0));
    vector<vector<int>> DP(N,vector<int>(N,0));
    for(int i =0;i < N; i++){
        for(int j =0; j < N; j++){
            cin >> matrix[i][j];
        }
    }
    DP[0][0] = matrix[0][0];
    for(int i = 0; i <N; i++){
        for(int j = 0; j < N; j++){
            if(i == 0 && j == 0) continue;
            if(i == 0){
                DP[i][j] = DP[i][j-1] + matrix[i][j];
                continue;
            }
            if(j == 0){
                DP[i][j] = DP[i-1][j] + matrix[i][j];
                continue;
            }
            DP[i][j] = DP[i-1][j] + DP[i][j-1] - DP[i-1][j-1] + matrix[i][j];
        } 
    }

    vector<vector<int>> input(M);
    for(int j = 0; j < M; j++){
        for(int i = 0; i < 4; i++){
            int k; cin >> k;
            input[j].push_back(k);
        }
    }

    for(int i = 0; i < M; i++){
        int x1,y1,x2,y2;
        y1 = input[i][0] - 1;
        x1 = input[i][1] - 1;
        y2 = input[i][2] - 1;
        x2 = input[i][3] - 1;
        if(x1 - 1 < 0 && y1 - 1 < 0){
            cout << DP[y2][x2] << "\n";
            continue;
        }
        if(x1 - 1< 0){
            cout << DP[y2][x2]- DP[y1-1][x2] << "\n";
            continue;
        }   
        if(y1 - 1 < 0){
            cout << DP[y2][x2] - DP[y2][x1-1] <<"\n";
            continue;
        }

        
        cout << DP[y2][x2] - DP[y2][x1-1] - DP[y1-1][x2] + DP[y1-1][x1-1]<<"\n";
    }
}