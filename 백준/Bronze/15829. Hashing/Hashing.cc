#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main() {
	int number; cin >> number;
	vector<int> arr(number);
	string inp; cin >> inp;
	unsigned long long total = 0;
	for (int i = 0; i < number; i++) {
		arr[i] = inp[i];
	}
	for (int i = 0; i < number; i++) {
		unsigned long long pow = 1;
		for (int j = 0; j < i; j++) {
			pow *= 31;
			pow = pow % 1234567891;
		}
		total += (static_cast<int>(arr[i])-96) * pow;
		total %= 1234567891;
	}

	cout << total;
}
