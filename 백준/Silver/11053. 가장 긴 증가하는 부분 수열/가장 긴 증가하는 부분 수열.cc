#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr;
    int DP[1001];
    int N; cin >>N;
    int ans = 1;
    for(int i=0;i<N;i++){
        int input; cin >>input;
        arr.push_back(input);
    }
    DP[0] = 1;

    for(int i = 1; i < N; i++){
        int maxDP = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i])
                maxDP = max(maxDP, DP[j]);
        }
        DP[i] = maxDP + 1;
        ans = max(ans, DP[i]);
    }
    
    cout << ans;
}
