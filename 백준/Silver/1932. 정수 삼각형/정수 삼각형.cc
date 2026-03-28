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

    int dp[501][501];
    int tri[501][501];
    int N; cin >> N;
    for(int i =0; i< N; i++){
        for(int j = 0; j < i + 1; j++){
            cin >> tri[i][j];
        }
    }
    dp[0][0] = tri[0][0]; // 초기값(삼각형 윗 꼭짓점)

    for(int i = 1; i < N; i++){
        for(int j = 0; j < i + 1; j++){
            if(j == 0) dp[i][j] = dp[i-1][j] + tri[i][j];
            else if(j == i) dp[i][j] = dp[i-1][j-1] + tri[i][j];
            else{
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + tri[i][j];
            }
        }
    }
    int ans = -1;
    for(int i =0; i<N; i++){
        ans = max(ans, dp[N-1][i]);
    }
    cout << ans;
}