#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
	int N, first, end, number, M;
	cin >> N >> M;

	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < M; i++) {
		cin >> first >> end >> number;
		for (int i = first - 1; i < end; i++) {
			arr[i] = number;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}