#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,M; cin >> N >> M;
    int K; cin >> K;
    string S; cin >> S;
    for(char c : S){
        if (c == 'A'){
            N = N + 2;
            if(N % 4 != 0){
                N %= 4;
            }
        }

        else if(c=='C'){
            if(N==2 || N==3){
                M++;
                if(N==2){
                    N = 3;
                }
                else{
                    N = 2;
                }
                if(M % 2 != 0){
                    M = M % 2;
                }
            }
            else{
                M++;
                if(M % 2 != 0){
                    M = M % 2;
                }
                N += 3;
                N %= 6;
            }
        }

        else if(c=='B'){
            M++;
            if(M%2!=0){
                M = M % 2;
            }
            if(N==3||N==4){
                N++;
                if(N==5) N = 3;
            }else{
                N++;
                if(N==3) N = 1;
            }
        }

        else{
            if(N == 1 and M==1){
                M++;
            }
            else if(M==2 and N==4){
                M--;
            }
            else if(M==1){
                N--;
            }
            else{
                N++;
            }
        }
    }
    cout << N << " " << M;
}