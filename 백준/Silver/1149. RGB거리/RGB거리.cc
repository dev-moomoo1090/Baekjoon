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

    int dp[1001][3];
    vector<vector<int>> input;
    int N; cin >> N;
    for(int i =0;i<N;i++){
        int r,g,b; cin >> r >> g >> b;
        vector<int> temp = {r,g,b};
        input.push_back(temp);
    }
    dp[0][0] = input[0][0];
    dp[0][1] = input[0][1];
    dp[0][2] = input[0][2];
    for(int i = 1; i < N; i++){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + input[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + input[i][1];
        dp[i][2] = min(dp[i-1][0],dp[i-1][1]) + input[i][2];
    }
    int ans = min(dp[N-1][0] ,min(dp[N-1][1],dp[N-1][2]));
    cout << ans;
}