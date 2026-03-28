#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,V; cin >> A >> B >> V;
    int val = ceil((double)(V - B) / (A - B));
    cout << val;
}