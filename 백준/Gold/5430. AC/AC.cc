#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    int testCase; cin >> testCase;

    while(testCase--){
        deque<int> dq;
        string cmd; cin >> cmd;
        int vecSize; cin >> vecSize;
        string s;
        cin >> s;
        s = s.substr(1,s.size()-2);
        stringstream ss(s);
        int x; char c;
        while(ss >> x){
            dq.push_back(x);
            ss>>c;
        }

        int Rcount = 0;
        bool err = false;
        for(char command : cmd){
            if(command == 'D' && dq.empty()){
                err = true;
                break;
            }
            if(command == 'R') Rcount++;
            else if(command == 'D' && !dq.empty()){
                if(Rcount % 2 == 0){
                    dq.pop_front();
                    vecSize--;
                }
                else{
                    dq.pop_back();
                    vecSize--;
                }
            }
        }
        if(Rcount % 2 == 1){
            reverse(dq.begin(),dq.end());
        }

        if(err) cout << "error\n";
        else {
            cout << "[";
            for(int i = 0; i < vecSize; i++){
                if(i == vecSize - 1) cout << dq[i];
                else cout << dq[i] << ',';
            }
            cout << "]\n";
        }
    }
}