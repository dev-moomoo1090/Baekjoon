#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int arr[9];
	int count = 0;
	bool val = true;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	for (int asc = 0; asc < 8; asc++) {
		if (arr[asc] == asc + 1)
			count++;
	}
	if (count == 8) {
		cout << "ascending";
		val = false;
	}
	count = 0;
	int k = 8;
	for (int dsc = 0; dsc < 8; dsc++) {
		if (arr[dsc] == k)
			count++;
		k--;
	}
	if (count == 8) {
		cout << "descending";
	}
	else if(val) {
		cout << "mixed";
	}
}