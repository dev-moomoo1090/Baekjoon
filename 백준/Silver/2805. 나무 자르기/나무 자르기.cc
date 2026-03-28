#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void quick_sort(vector<int>& vec, int left, int right){
//     if(left >= right) return;

//     int pivot = vec[right];
//     int i = left - 1;

//     for(int j = left; j < right; ++j){
//         if(vec[j] <= pivot){
//             i++;
//             swap(vec[j], vec[i]);
//         }
//     }

//     swap(vec[i+1], vec[right]);
//     int pivotIndex = i+1;
//     quick_sort(vec,left, pivotIndex -1);
//     quick_sort(vec,pivotIndex + 1, right);

// } ㅠㅠ heap정렬 쓰세요 아니면 랜덤피벗...
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    int M; cin >> M;
    vector<int> vec;
    for(int i = 0; i < N; i++){
        int h; cin >> h;
        vec.push_back(h);
    }
    sort(vec.begin(), vec.end());
    long long int right = vec[N-1];
    long long int left = 0;
    while(left <= right){
        long long mid = left + (right - left) / 2;
        long long int sum = 0;
        for(int i = 0; i < N; i++){
            if(mid < vec[i]){
                sum += vec[i] - mid;
            }
        }
        if(sum >= M) left = mid + 1;
        else right = mid - 1;
    }
    cout << right;
}