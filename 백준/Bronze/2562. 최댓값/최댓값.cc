#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
	int arr[9];
	int count = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	for (int J = 0; J < 9; J++) {
		if (arr[J] > max) {
			max = arr[J];
			count = J;
		}
	}
	cout << max << endl << count + 1;
}