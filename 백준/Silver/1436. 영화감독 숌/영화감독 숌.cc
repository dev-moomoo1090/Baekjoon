#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int count;
    cin >> count;
    int counter = 0, val = 0;
    while(count!=0){
        counter++;
        if(to_string(counter).find("666") != string::npos){
            count--;
        }
    }
    cout << counter;
}