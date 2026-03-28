#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;
long long int moomoo(long long int a, int b, int c){
    long long int next = a;
    if(b == 1) return next % c;
    if(b % 2 == 0){
        return moomoo(next * next % c, b / 2,c) % c;
    }
    else{
        return moomoo(next * next % c, b / 2,c) * next % c;
        
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a;
    int b,c;
    cin >> a >> b >> c;
    cout << moomoo(a,b,c);
    
}