#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

bool visited[10001];
int arr[9];
vector<int> input;
void dfs(int start, int depth, int N, int M){
    if(depth == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = start; i < N; i++){
        if(!visited[input[i]]){
            visited[input[i]] =true;
            arr[depth] = input[i];
            dfs(start, depth+1, N, M);
            visited[input[i]]= false;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M; cin >> N >> M;
    for(int i = 0 ;i < N;i++){
        int k; cin >> k;
        input.push_back(k);
    }
    sort(input.begin(),input.end());
    dfs(0,0,N,M);

}