#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
	int n;
	int max = -10000000;
	int min = 10000000;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for (int j = 0; j < n; j++) {
		if (arr[j] > max)
			max = arr[j];
		if (arr[j] < min)
			min = arr[j];
	}

	cout << min << " "<< max << endl;

}