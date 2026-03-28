#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;
void reverseRange(int arr[], int start, int end) {
	reverse(arr + start - 1, arr + end);
}

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}
	int* ptr = arr.data();

	for (int j = 0; j < M; j++) {
		int a, b;
		cin >> a >> b;
		reverseRange(ptr, a, b);
	}
	for (int out = 0; out < N; out++) {
		cout << ptr[out] << " ";
	}
}
