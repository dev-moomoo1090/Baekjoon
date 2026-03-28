#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N,M; cin >> N >> M;
    unordered_map <int, string> unmap;
    unordered_map <string, int> re_unmap;
    for(int i = 1; i <= N; i++){
        string temp; cin >> temp;
        unmap[i] = temp;
        re_unmap[temp] = i;
    }
    for(int ii = 1; ii <= M; ii++){
        string temp; cin >> temp;
        if(isdigit(temp[0])){
            auto it = unmap.find(stoi(temp));
            cout << it->second << "\n";
        }
        else{
            auto it = re_unmap.find(temp);
            cout << it->second << "\n";
        }
    }
}