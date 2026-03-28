#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int N;
	int sum = 0;
	string input;
	cin >> N;
	cin >> input;

	if (input.length() == N) {
		for (char digit : input) {
			sum += digit - '0';
		}
		cout << sum;
	}
}
