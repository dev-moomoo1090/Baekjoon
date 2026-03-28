#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N,M; cin >> N >> M;
    map<string,int> Lno;
    vector<string> val;
    for(int i = 0; i < N; i++){
        string temp; cin >> temp;
        Lno[temp] = i+1;
    }
    int count = 0;
    for(int ii = 0; ii < M; ii++){
        string temp; cin >> temp;
        auto it = Lno.find(temp);
        if(Lno.find(temp) != Lno.end()){
            count++;
            val.push_back(temp);
        }
    }
    cout << count << "\n";
    sort(val.begin(),val.end());
    for(int iii = 0; iii < count; iii++){
        cout << val[iii] << "\n";
    }
}