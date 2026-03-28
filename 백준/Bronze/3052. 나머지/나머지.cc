#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;
int main() {
	int input;
	int count = 0;
	int arr[42] = { 0 };
	for (int i = 0; i < 10; i++) {
		cin >> input;
		arr[input % 42] = 1;
	}
	for (int j = 0; j < 42; j++) {
		if (arr[j] == 1) count++;
	}
	cout << count;
}