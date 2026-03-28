#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <iomanip>

using namespace std;

int main() {
	int N, M;
	float max = 0;
	float total = 0;
	cin >> N;
	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> M;
		if (M > max) {
			max = M;
		}
		arr[i] = M;
	}
	for (int j = 0; j < N; j++) {
		{
			total += (arr[j] / max) * 100;
		}
	}
	cout << fixed << setprecision(2);
	cout << total / N;
}
