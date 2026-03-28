#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
	int n;
	int target;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> target;

	int Count = count(arr.begin(), arr.end(), target);

	cout << Count;

}