#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
	int n;
	int target;
	cin >> n;
	cin >> target;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for (int j = 0; j < n; j++) {
		if (arr[j] < target) {
			cout << arr[j] << " ";
		}
	}

}