#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
void check(int& blue, int& white,int x,int y, int size, vector<vector<int>>& paper){
    int op = paper[y][x];
    bool test = true;
    for(int i = x; i < x + size; i++){
        for(int j = y; j < y + size; j++){
            if(paper[j][i] != op) test = false;
        }
    }
    if(test){
        if(op == 1) blue++;
        else white++;
        return;
    }

    int halfSize = size / 2;
    check(blue,white,x,y,halfSize,paper);
    check(blue,white,x + halfSize ,y,halfSize,paper);
    check(blue,white,x,y+halfSize,halfSize,paper);
    check(blue,white,x+halfSize,y+halfSize,halfSize,paper);

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int N; cin >> N;

    vector<vector<int>> paper(N, vector<int>(N,0));

    int blueCount = 0;
    int WhiteCount = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int temp; cin >> temp;
            paper[i][j] = temp;
        }
    }

    check(blueCount, WhiteCount, 0,0,N,paper);

    cout << WhiteCount << "\n" << blueCount;
    
}