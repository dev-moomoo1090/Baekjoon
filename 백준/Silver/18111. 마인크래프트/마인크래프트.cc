#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>> vp;
    int N,M,B; cin >> N >> M >> B;
    vector<vector<int>> v(N,vector<int>(M,0));

    for(int i = 0; i < N; i++){     //초기 세팅
        for(int j = 0; j < M; j++){
            int y; cin >> y;
            v[i][j] = y;
        }
    }

    for(int cri = 0; cri <= 256; cri++){
        int totalSecond = 0;
        int tempBlock = B;
        for(int i = 0; i<N; i++){
            for(int j = 0; j < M; j++){
                if(cri > v[i][j]){      // 기준 y 보다 낮을때 -> 설치 : 1초
                    totalSecond += 1 * (cri - v[i][j]);  
                    tempBlock -= cri - v[i][j];
                }
                else if(cri < v[i][j]){ //기준 y보다 높을때 -> 파괴 : 2초
                    totalSecond += 2 * (v[i][j] - cri);
                    tempBlock += v[i][j] - cri;
                }
            }
        }
        if(tempBlock >= 0){
            vp.push_back({cri,totalSecond});
        }
    }

    sort(vp.begin(),vp.end(),[](pair<int,int> a, pair<int,int> b){
        if(a.second == b.second) return a.first > b.first;
        return a.second < b.second;
    });

    cout << vp[0].second << " " << vp[0].first;
}