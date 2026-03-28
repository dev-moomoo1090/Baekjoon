#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s = 0;
    int number; cin >> number;
    int x;
    string order = "";
    for(int i = 0; i < number; i++){
        cin >> order;
        if(order == "add"){
            cin >> x;
            s |= (1<<x-1);
        }
        else if(order == "remove"){
            cin >> x;
            s &= ~(1<<x-1);
        }
        else if(order == "check"){
            cin >> x;
            if(s & (1<<x-1)){
                cout << 1 << "\n";
            }
            else cout << 0 << "\n";
        }
        else if(order == "toggle"){
            cin >> x;
            if(s & (1<<x-1)){
                s &= ~(1<<x-1);
            }
            else s |= (1<<x-1);
        }
        else if(order == "all"){
            s |= (1<<21) - 1;
        }
        else if(order == "empty"){
            s = 0;
        }
    }
    return 0;
}