#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);  
    int T; cin >> T;
    double ans =(T*T)  /4.0;
    cout << (long long)round(ans);
}