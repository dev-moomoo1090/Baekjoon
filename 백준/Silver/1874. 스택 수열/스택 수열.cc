#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr;
    vector<char> answer;
    int number = 1;
    arr.push_back(number);
    answer.push_back('+');
    bool isPossible =true;
    number++;
    for(int i = 0; i < n; i++){
        int target; cin >> target;
        while(arr.size() == 0 || arr.back() != target){
            arr.push_back(number);
            answer.push_back('+');
            number++;
            if(arr.back() > target){
                isPossible = false;
                break;
            }
        }
        arr.pop_back();
        answer.push_back('-');
    }

    if(isPossible){
        for(int i = 0; i < answer.size(); i++){
            cout << answer[i] << "\n";
        }
    }
    else{
        cout << "NO";
    }
}