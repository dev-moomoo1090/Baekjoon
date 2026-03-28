#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;
int main() {
	int N;
	int max = 0, L = 0;
	bool ex = false;
	vector<int> arr(28); 
	vector<int> ans(2);
	for (int i = 0; i < 29; i++) {
		cin >> N;
		arr[i] = N;
	}
	unordered_set<int> arrSet(arr.begin(), arr.end());
	for (int i = 1; i <= 30; i++) {
		if (arrSet.find(i) == arrSet.end()) {
			ans[L++] = i;
			if (L == 2) break; // 두 개만 찾으면 종료
		}
	}
	int number1 = 0, number2 = 0, min = 0;

	number1 = ans[0];
	number2 = ans[1];
	max = number1;
	min = number2;
	if (max < number2) {
		max = number2;
		min = number1;
	}
	cout << min << endl;
	cout << max << endl;



}