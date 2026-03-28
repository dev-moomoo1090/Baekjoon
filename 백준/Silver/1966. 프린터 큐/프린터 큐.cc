#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    queue<pair<int,int>> q;
    vector<int> arr;
    int N;
    int target;
    for(int i = 0; i < n; i++){
        arr.clear();
        q = queue<pair<int,int>>();
        cin >> N >> target;
        for(int j = 0; j < N; j++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
            q.push({j,temp});
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int count = 0;
        int p =0;
        while(true){
            if(q.front().second != arr[p]){
                q.push({q.front().first,q.front().second});
                q.pop();
            }
            else{
                if(q.front().first == target){
                    count++;
                    cout << count<<"\n";
                    break;
                }
                else{
                    q.pop();
                    count++;
                    p++;
                }

            }
        }
    }
}