#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N,M; cin >> N >> M;
    unordered_map<string,string> site;
    for(int i = 0; i < N; i++){
        string temp; cin >> temp;
        string password; cin >> password;
        site[temp] = password;
    }
    for(int ii = 0; ii < M; ii++){
        string add; cin >> add;
        if(site.find(add) != site.end()){
            auto it = site.find(add);
            cout << it->second << "\n";
        }
    }
}