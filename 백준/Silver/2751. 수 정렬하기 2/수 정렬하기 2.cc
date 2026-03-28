
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int num; cin >> num;
	vector<int> arr(num);
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int number : arr) {
		cout << number << "\n";
	}

	return 0;
}