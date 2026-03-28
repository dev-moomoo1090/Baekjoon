#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
void moomoo(int& count, int& n,int& r,int& c){
    if(n == 0) return;
    int d = pow(2,n) / 2;
    int mul = pow(2,n-1);
    if(r <= d && c <= d){  //좌상(1번째)
        n--;
        moomoo(count,n,r,c);
    }
    else if(r <= d && c > d){ //우상 (2번째)
        count += mul * mul;
        n--;
        c -= d;
        moomoo(count,n,r,c);
    }
    else if(r > d && c <= d){ //좌하 (3번째)
        count += 2 * mul * mul;
        n--;
        r -= d;
        moomoo(count,n,r,c);
    }
    else{ //우하 (4번째)
        count += 3 * mul * mul;
        n--;
        r -= d;
        c -= d;
        moomoo(count,n,r,c);
    }
}

int main(){
    int N; cin >> N;
    int r,c; cin >> r >> c;
    r++; c++; // 시작을 1,1로만들기

    int count = 0;
    moomoo(count, N ,r,c);
    cout << count;
}