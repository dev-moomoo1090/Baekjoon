#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string input; cin >> input;
    string intTemp = "";
    int total = 0;
    bool minusIncounter = false;
    vector<int> vec;
    vector<char> ops; 
    
    for(int i = 0; i < (int)input.size(); i++){
        if(isdigit(input[i])){
            intTemp += input[i];
        }
        if(not isdigit(input[i]) || i == (int)input.size() - 1){
            if(intTemp != ""){
                vec.push_back(stoi(intTemp));
                intTemp = "";
            }
            if(not isdigit(input[i]) && i != (int)input.size() - 1){
                ops.push_back(input[i]);
            }
        }
    }
    
    total = vec[0]; 
    for(int i = 0; i < (int)ops.size(); i++){
        if(ops[i] == '+'){
            if(minusIncounter) total -= vec[i+1];
            else total += vec[i+1];
        }
        else{
            minusIncounter = true;
            total -= vec[i+1];
        }
    }
    cout << total;
}