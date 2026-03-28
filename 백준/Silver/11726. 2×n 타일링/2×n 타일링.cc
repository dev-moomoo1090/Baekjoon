#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    long long int* arr = new long long int[N+1];

    for(int i = 1; i <= N; i++){
        if(i < 4){
            arr[i] = i;
        }
        else arr[i] = (arr[i-1] + arr[i-2]) % 10007;
    }

    cout << arr[N];

    delete[] arr;
}