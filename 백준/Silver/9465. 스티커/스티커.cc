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

    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        vector<vector<int>> vec(2,vector<int>(N,0));
        int dp[3][100001] = {0};
        for(int i =0;i<2;i++){
            for(int j =0; j < N; j++){
                int k; cin >> k;
                vec[i][j] = k;
            }
        }
        dp[0][0] = vec[0][0];
        dp[1][0] = vec[1][0];
        dp[2][0] = 0;

        for(int i = 1; i < N;i++){
            for(int j = 0; j < 3; j++){
                if(j==0){
                    dp[j][i] = max(dp[1][i-1], dp[2][i-1]) + vec[j][i];
                }
                else if(j == 1){
                    dp[j][i] = max(dp[0][i-1], dp[2][i-1]) + vec[j][i];
                }
                else{
                    dp[j][i] = max(max(dp[0][i-1], dp[1][i-1]),dp[2][i-1]);
                }
            }
        }
        cout << max(max(dp[0][N-1],dp[1][N-1]),dp[2][N-1]) << "\n";
    }
}