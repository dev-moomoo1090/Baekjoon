#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    int key;
    if(isdigit(str1[0])) key = stoi(str1) + 3;
    else if(isdigit(str2[0])) key = stoi(str2) + 2;
    else if(isdigit(str3[0])) key = stoi(str3) + 1;

    if(key % 3 == 0 and key % 5 == 0) cout << "FizzBuzz";
    else if(key % 3 == 0) cout << "Fizz";
    else if(key % 5 == 0) cout << "Buzz";
    else cout << key;

    return 0;
}