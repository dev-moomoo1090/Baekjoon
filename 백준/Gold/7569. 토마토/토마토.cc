#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int visit[101][101][101];
int tomato[101][101][101];
int main(){
    queue<tuple<int,int,int>> q;
    int X,Z; cin >> X >> Z;
    int Y; cin >> Y;
    int size = 0;
    int count = 0;
    for(int y = 0; y < Y; y++){
        for(int z = 0; z < Z; z++){
            for(int x = 0; x <X; x++){
                cin >> tomato[y][z][x];
                if(tomato[y][z][x] == 1) q.push({y,z,x});
            }
        }
    }

    while(!q.empty()){
        size = q.size();
        for(int i = 0; i < size; i++){
            tuple<int,int,int> y_z_x = q.front();
            q.pop();
            int y = get<0>(y_z_x);
            int z = get<1>(y_z_x);
            int x = get<2>(y_z_x);

            if(y - 1 >= 0 && y - 1 < Y && z >= 0 && z < Z && x >= 0 && x < X && tomato[y-1][z][x] == 0){   //위
                tomato[y-1][z][x] = 1;
                q.push({y-1,z,x});
            }
            if(y + 1 >= 0 && y + 1 < Y && z >= 0 && z < Z && x >= 0 && x < X && tomato[y+1][z][x] == 0){   //아래
                tomato[y+1][z][x] = 1;
                q.push({y+1,z,x});
            }
            if(y >= 0 && y < Y && z-1 >= 0 && z-1 < Z && x >= 0 && x < X && tomato[y][z-1][x] == 0){   //앞
                tomato[y][z-1][x] = 1;
                q.push({y,z-1,x});
            }
            if(y >= 0 && y < Y && z+1 >= 0 && z+1 < Z && x >= 0 && x < X && tomato[y][z+1][x] == 0){   //뒤
                tomato[y][z+1][x] = 1;
                q.push({y,z+1,x});
            }
            if(y >= 0 && y < Y && z >= 0 && z < Z && x-1 >= 0 && x-1 < X && tomato[y][z][x-1] == 0){   //뒤
                tomato[y][z][x-1] = 1;
                q.push({y,z,x-1});
            }
            if(y >= 0 && y < Y && z >= 0 && z < Z && x+1 >= 0 && x+1 < X && tomato[y][z][x+1] == 0){   //뒤
                tomato[y][z][x+1] = 1;
                q.push({y,z,x+1});
            }
        }
        if(!q.empty()) count++;
    }

    for(int y = 0; y < Y; y++){
        for(int z = 0; z < Z; z++){
            for(int x = 0; x <X; x++){
                if(tomato[y][z][x] == 0) {cout << -1; return 0;}
            }
        }
    }
    cout << count;
}