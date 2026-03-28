#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>> N;
    const int X = N;
    char stage[3][X];
    int J, S; cin >> J >> S;
    int H; cin >> H;
    int K; cin >> K;
    for(int i = 0; i <= 2; i++){
        string s; cin >> s;
        for(int ii = 0; ii < N; ii++){
            stage[i][ii] = s[ii];
        }
    }

    for(int i = 0; i < N; i++){
            if(stage[0][i] == 'v'){
                if(S > 0){
                    S--;
                }
                else{
                    H -= K;
                    if(H <= 0){
                        break;
                    }
                }
            }
            else{
                if(stage[2][i] == '^' and stage[1][i] != '^'){
                    if(J > 0){
                        J--;
                    }
                    else{
                        H -= K;
                        if(H <= 0){
                            break;
                        }
                    }
                }
            }
    }
    for(int i= 0; i < N; i++){
        if(stage[1][i] == '^'){
            if(J > 1){
                J -= 2;
            }
             else{
                H -= K;
                if(H <= 0){
                    break;
                }
            }
        }
    }

    if(H > 0){
        cout << H;
    }
    else{
        cout << -1;
    }
}