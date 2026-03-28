#include <bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin >> input;
    int m = input[12] - '0';
    int total = 0;
    bool isEven = true;
    for(int i = 0; i < 12; i++){
        if(input[i] != '*'){
            int t = input[i] - '0';
            if((i+1) % 2 == 1){
                total += t;
            }
            else{
                total += t * 3;
            }
        }
        else{
            if((i+1) % 2 == 1) isEven = false;
            else isEven = true;
        }
    }
    for(int k = 0; k <= 9; k++){
        int temp = (isEven ? k * 3 : k);
        int sum = total + temp;
        int expectedCheck = (10 - (sum % 10)) % 10;

        if(m == expectedCheck) cout << k;
    }
}