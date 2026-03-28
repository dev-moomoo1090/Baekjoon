#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;
    int n,k;
    for (int  i = 0; i < T; i++){
        cin >> k >> n;
        vector<vector<int>> apt(k+1, vector<int>(n+1,0));
        for (int j = 1; j <= n; j++){
            apt[0][j] = j;      //0층 1호 ~ n호
        }
        for(int y = 1; y <= k; y++){     //1층 1호부터 k층 n호
            for(int x = 1; x <= n; x++){
                apt[y][x] = apt[y][x-1] + apt[y-1][x];
            }
        }
        cout << apt[k][n] << "\n";
    }

    return 0;
}