#include <bits/stdc++.h>
using namespace std;
int main(){
    int test_case; cin >> test_case;
    int input_case;

    for(int i =0; i<test_case; i++){
        map<string, int> clothesCount;
        cin >> input_case;
        int value = 1;
        for(int j = 0; j < input_case; j++){
            string name; cin >> name;
            string Case; cin >> Case;
            clothesCount[Case]++;
        }
        for(auto item : clothesCount){
            value *= item.second + 1;
        }
        value--;
        cout << value << "\n";
    }
}