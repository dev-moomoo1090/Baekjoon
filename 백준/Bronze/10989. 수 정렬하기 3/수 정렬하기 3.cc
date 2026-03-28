#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<int> arr(10001, 0);
    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        arr[temp]++;
    }
    for(int i =1; i <= 10000; i++){
        while(arr[i]--){
        cout << i << "\n";
        }
    }
}