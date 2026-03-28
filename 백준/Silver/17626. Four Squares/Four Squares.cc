#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    int* DP = new int[N+1];

    fill(DP, DP + N + 1, INT_MAX);
    DP[0] = 0;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j*j <= i; j++){
            DP[i] = min(DP[i], DP[i - j*j] + 1);
        }
    }
    cout << DP[N];
    delete[] DP;
}