#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int X; cin >> X;
    vector<int> dp(X+1,0);
    vector<int> score(X+1,0);
    for(int i = 1; i <= X; i++){
        int k; cin >> k;
        score[i] = k;
    }
    dp[0] = score[0];
    dp[1] = score[0] + score[1];
    dp[2] = max(score[0] + score[2],score[1] + score[2]);
    for(int i = 3; i <= X; i++){
        dp[i] = max(dp[i-2] + score[i], dp[i-3] + score[i-1] + score[i]);
    }
    cout << dp[X];
}