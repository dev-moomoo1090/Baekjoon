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
    int R, B; cin >> R >> B;

    int tile = R + B;
    for(int w = 3; ;w++){
        int l = (R - 2*w + 4) / 2;
        if(l < w) break;
        if((long long)(l-2) * (w-2) == B){
            cout << l <<" " << w;
            break;
        }
    }
}