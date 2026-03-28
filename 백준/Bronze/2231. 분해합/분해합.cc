#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n; cin >> n;
	int start = n - 9 * to_string(n).length();
	for (int i = start; i < n; i++) {
		int total=i, temp = i;
		while (temp > 0) {
			total += temp % 10;
			temp /= 10;
		}
		if (total == n) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}