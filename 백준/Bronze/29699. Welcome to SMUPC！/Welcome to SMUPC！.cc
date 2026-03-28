#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "WelcomeToSMUPC";
    int N; cin >> N;
    N--;
    N = N % 14;

    cout << s[N];
}