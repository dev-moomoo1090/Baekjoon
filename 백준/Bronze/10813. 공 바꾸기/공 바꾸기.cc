#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
	int N, M, i, j;

	cin >> N;
	cin >> M;
	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		i--;
		j--;
		int j1 = arr[j];
		int i1 = arr[i];
		arr[j] = i1;
		arr[i] = j1;
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
}