#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    int dist[100001];
    fill(dist, dist + 100001, -1);

    int N, K; cin >> N >> K;

    q.push(N);
    dist[N] = 0;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        if(curr == K){
            cout << dist[K];
            return 0;
        }

        int next[] = {curr - 1, curr + 1, curr*2};
        for(int i = 0; i < 3; i++){
            if(next[i] >= 0 && next[i] <= 100000 && dist[next[i]] == -1){
                dist[next[i]] = dist[curr] + 1;
                q.push(next[i]);
            }
        }
    }
}