#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N; cin >> N;
    priority_queue<int> pq;
    while(N--){
        int input; cin >> input;
        if(input != 0){
            pq.push(input);
        }
        else{
            if(pq.empty()) cout << 0 << "\n";
            else{   
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
}