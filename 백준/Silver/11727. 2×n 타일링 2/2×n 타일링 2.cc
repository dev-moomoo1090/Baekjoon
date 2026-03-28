#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    long long int* arr = new long long int[N+1];

    if(N >= 1) arr[1] = 1;
    if(N >= 2) arr[2] = 3;
    for(int i = 3; i <= N; i++){
        
        arr[i] = (arr[i-1] + 2*arr[i-2]) % 10007;
    }

    cout << arr[N];

    delete[] arr;
}