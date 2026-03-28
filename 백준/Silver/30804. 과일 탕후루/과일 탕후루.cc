#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int N; cin >> N;
    vector<int> t;
    for(int i = 0; i < N; i++){
        int input; cin >> input;
        t.push_back(input);
    }

    map<int,int> cnt;
    int left = 0;
    int ans = 0;

    for(int right = 0; right < N; right++){
        cnt[t[right]]++;

        while(cnt.size() > 2){
            cnt[t[left]]--;
            if(cnt[t[left]] == 0){
                cnt.erase(t[left]);
            }
            left++;
        }
        ans = max(ans, right - left + 1);
    }
    cout << ans;
}