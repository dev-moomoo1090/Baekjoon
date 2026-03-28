#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    while(true){
        string s;
        getline(cin,s);
        vector<char> arr;
        bool isFact = true;
        if(s == ".") break;
        int size = 0;
        for(int i = 0; i < s.size(); i++){
            char k = s[i];
            if(k == '(' || k == '['){
                arr.push_back(k);
                size++;
            }
            else if(k == ')' || k == ']'){
                if(size > 0){
                    if ((k == ')' && arr[size-1] == '(') || (k == ']' && arr[size-1] == '[')) {
                        arr.pop_back();
                        size--;
                    }
                    else{
                        isFact = false;
                        break;
                    }
                }
                else{
                    isFact = false;
                    break;
                }
            }
        }
        if(arr.size() != 0) isFact = false;
        if(isFact) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
}