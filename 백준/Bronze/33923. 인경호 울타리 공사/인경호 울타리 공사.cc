#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int N,M; cin >> N >> M;
    if(N != M){
        int min = N;
        if(N > M) min = M;
        min -= 1;
        cout << min*min;
    }
    else if(N == 3){
        N -= 1;
        N /= 2;
        cout << (N*N) + (N*N);
    }
    else{
        N -= 1;
        int a = 1;
        int b = N - a;
        cout << (a*a) + (b*b);
    }
}
