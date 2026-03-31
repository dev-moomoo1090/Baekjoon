#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M; cin >> N>>M;
    for(int i =0;i<N;i++){
        for(int j =0; j<M;j++){
            cout<<"*";
        }
        cout << "\n";
    }
}