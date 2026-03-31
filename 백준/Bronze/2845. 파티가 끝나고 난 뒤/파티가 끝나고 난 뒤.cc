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

    int L,P; cin >> L >> P;
    long int cri = L * P;

    for(int i = 0 ; i < 5; i++){
        int temp; cin >> temp;
        cout << temp - cri <<" ";
    }
}