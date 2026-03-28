#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int N; cin >> N;
    vector<long long> before;
    vector<long long> after;

    for(int i = 0; i < N; i++){
        long long input; cin >> input;
        before.push_back(input);
    }

    after = before;

    sort(after.begin(), after.end());
    after.erase(unique(after.begin(), after.end()), after.end());

    

    for(int i = 0; i < N; i++){
        int rank = lower_bound(after.begin(),after.end(),before[i]) - after.begin();
        if(i == N-1) cout << rank;
        else cout << rank << " ";
    }
}