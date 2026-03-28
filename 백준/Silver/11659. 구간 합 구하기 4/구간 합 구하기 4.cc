#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    long long int* arr = new long long int[N+1];
    arr[0] = 0;
    int M; cin >>  M;

    for(int i = 1; i <= N; i++){
        int input; cin >> input;
        arr[i] = arr[i-1] + input;
    }

    while(M--){
        int i,j; cin >> i >> j;
        cout << arr[j] - arr[i-1] << "\n";
    }


    delete[] arr;
}