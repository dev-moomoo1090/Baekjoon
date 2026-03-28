#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    int M; cin >> M;
    int total = 0;
    while(N--){
        int count = 0;
        string s; cin >> s;
        for(char c : s){
            if (c =='O' ) count++;
        }
        if((M+1) / 2 <= count) total++;
    }
    cout << total;
}