#include <iostream>

using namespace std;

int main(){
    int T; cin >>T;
    long long int DP[102] = {0};

    DP[1] = 1;
    DP[2] = 1;
    DP[3] = 1;
    DP[4] = 2;
    DP[5] = 2;

    for(int i = 6; i <= 100; i++){
        DP[i] = DP[i-1] + DP[i-5];
    }

    while(T--){
        int N; cin >> N;
        cout << DP[N] << "\n";
    }


}