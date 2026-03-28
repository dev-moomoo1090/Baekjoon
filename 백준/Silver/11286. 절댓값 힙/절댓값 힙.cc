#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;
struct cmp{
    bool operator()(int a, int b){
        if(abs(a) == abs(b)) return a > b;
        return abs(a) > abs(b);
    }
};
int main(){
    priority_queue<int, vector<int>,cmp> absHeap;
    int N; cin>>N;
    while(N--){
        int x; cin >> x;
        if(x == 0){
            if(absHeap.empty()) cout << 0 << "\n";
            else{  
                cout << absHeap.top() << "\n";
                absHeap.pop();
            }
        }
        else absHeap.push(x);
    }
}