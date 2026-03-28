#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

bool visited[9];
int arr[9];

void dfs(int depth,int start, int N, int M){
    if (depth == M) {
        for (int i = 0; i < M; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for (int i = start; i <= N; i++) {
        arr[depth] = i;
        dfs(depth + 1, i + 1, N, M);  // 다음엔 i+1부터
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M; cin >> N >> M;
    dfs(0, 1, N, M);
}