#include <bits/stdc++.h>
using namespace std;
void push(queue<int>& que){
    int n; cin >> n;
    que.push(n);
    return;
}
void pop(queue<int>& que){
    if(!que.empty()){
        cout << que.front() << "\n";
        que.pop();
    }
    else cout << -1 << "\n";
    return;
}
void front(queue<int>& que){
    if(!que.empty()){
        cout << que.front()<<"\n";
    }
    else cout << -1 << "\n";
    return;
}
void back(queue<int>& que){
    if(!que.empty()){
        cout << que.back()<<"\n";
    }
    else cout << -1 << "\n";
    return;
}
int main(){
    queue<int> que;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string order;
        cin >> order;
        if(order == "push") push(que);
        else if(order == "pop") pop(que);
        else if(order == "size") cout << que.size()<<"\n";
        else if(order == "empty") cout << (que.empty() ? 1 : 0)<<"\n";
        else if(order == "front") front(que);
        else back(que);
    }

    return 0;
}