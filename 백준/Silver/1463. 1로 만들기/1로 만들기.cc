#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int X; cin >> X;
    vector<int> dp(X + 1, 0);

    for(int i = 2; i <= X; i++){
        dp[i] = dp[i - 1] + 1;
        if(i % 2 == 0){
            dp[i] = min(dp[i], dp[i/2] + 1);
        }
        if(i % 3 == 0){
            dp[i] = min(dp[i], dp[i/3] + 1);
        }
    }
    cout << dp[X];
}