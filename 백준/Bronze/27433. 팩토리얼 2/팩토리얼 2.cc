#include <iostream>
using namespace std;
int main(){
    long long int N = 1;
    int input; cin >>input;
    for(int i = 1; i <= input; i++){
        N *= i;
    }
    
    cout << N;
}