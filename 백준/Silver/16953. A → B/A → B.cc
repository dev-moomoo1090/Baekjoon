#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <unordered_set>

using namespace std;
// const int MAX = 1000000001;
// bool visited[MAX]; 메모리 이슈
unordered_set<int> visited;

int bfs(int start, int target){
    queue<int> q;
    q.push(start);
    visited.insert(start);
    int count = 0;

    while(!q.empty()){
        int size = q.size();
        for(int i =0; i < size; i++){
            long long int now = q.front();
            q.pop();
            visited.insert(now);
            if(now == target){
                return count + 1;
            }
            if(now * 10 + 1 <= target && !visited.count(now * 10 + 1)){
                q.push(now * 10 + 1);
            }
            if(now * 2 <= target && !visited.count(now * 2)){
                q.push(now * 2);
            }
        }
       count++;
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b; cin >> a >> b;
    if(a == b)  {cout << 1; return 0;}
    cout << bfs(a,b);
}