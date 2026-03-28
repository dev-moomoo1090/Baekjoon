#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> makeTable(const string pattern){
    int m = pattern.size();
    vector<int> table(m, 0);
    int j = 0;
    for(int i = 1; i < m; i++){
        while(j > 0 && pattern[i] != pattern[j]) j = table[j-1];
        if(pattern[i] == pattern[j]) table[i] = ++j;
    }
    return table;
}

int main(){
    int N; cin >> N;
    int M; cin >> M;
    string s; cin >> s;
    
    string target;
    target.reserve(2*N+1);
    target = "I";
    for(int i = 0; i < N; i++) target += "OI";
    
    vector<int> table = makeTable(target);
    int count = 0;
    int j = 0;
    
    for(int i = 0; i < M; i++){
        while(j > 0 && s[i] != target[j]) j = table[j-1];
        if(s[i] == target[j]){
            if(j == (int)target.size()-1){
                count++;
                j = table[j];
            } else {
                j++;
            }
        }
    }
    cout << count;
}