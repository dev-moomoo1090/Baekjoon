#include <iostream>
using namespace std;

int main() {
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	if (d1 == d2 && d2 == d3) {
		cout << 10000 + d1 * 1000;
	}
	else if (d1 == d2 || d2 == d3 || d1 == d3) {
		int same = (d1 == d2) ? d1 : (d2 == d3) ? d2 : d1;
		cout << 1000 + same * 100;
	}
	else {
		int max_val = max(d1, max(d2, d3));
		cout << max_val * 100;
	}
}
