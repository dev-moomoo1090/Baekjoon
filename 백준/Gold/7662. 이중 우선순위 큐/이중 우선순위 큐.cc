#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        multiset<int> s;
        int k; cin >> k;
        while(k--){
            char cmd; cin >> cmd;
            int i; cin >> i;
            if(cmd == 'I'){
                s.insert(i);
            }
            else if(cmd == 'D'){
                if(s.empty()) continue;
                if(i == 1){
                    s.erase(prev(s.end()));
                }
                else{
                    s.erase(s.begin());
                }
            }
        }

        if(s.empty()) cout << "EMPTY\n";
        else cout << *prev(s.end()) << " " << *s.begin() << "\n";
    }
}