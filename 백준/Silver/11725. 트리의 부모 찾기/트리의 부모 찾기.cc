#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <cmath>
#include <map>

using namespace std;
struct Node{
    int prev;
    int data;
};
vector<Node> arr[100001];
bool visit[100001];
int ans[100001];

void bfs(int start){
    queue<int> q;
    q.push(start);
    visit[start] = true;

    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(Node next : arr[now]){
            if(!visit[next.data]){
                q.push(next.data);
                ans[next.data] = next.prev;
                visit[next.data] = true;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >>N;
    for(int i = 0; i < N; i++){
        int a,b; cin >> a >> b;
        arr[a].push_back({a,b});
        arr[b].push_back({b,a});
    }
    bfs(1);
    for(int i = 2; i < N + 1;i++){
        cout << ans[i] << "\n";
    }
}
