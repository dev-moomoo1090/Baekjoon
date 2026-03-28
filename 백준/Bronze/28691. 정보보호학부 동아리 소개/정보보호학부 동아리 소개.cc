#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char c; cin >> c;
    if(c == 'M') cout << "MatKor";
    else if(c == 'W') cout <<"WiCys";
    else if(c == 'C') cout << "CyKor";
    else if(c == 'A') cout << "AlKor";
    else cout << "$clear";
}