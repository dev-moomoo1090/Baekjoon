#include <bits/stdc++.h>
using namespace std;
vector<int> dp;
int main(){
    vector<int> arr;
    int n; cin >> n;
    int maxN = 0;
    for(int i = 0; i < n;i++){
        int temp; cin >> temp;
        arr.push_back(temp);
        maxN = max(maxN,temp);
    }

    dp.resize(maxN+1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i <= maxN; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    for(int i = 0; i < n; i++){
        int temp = arr[i];
        cout << dp[temp] << "\n";
    }
    return 0;
}