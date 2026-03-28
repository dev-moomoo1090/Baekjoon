#include <iostream>
using namespace std;

int main() {
	int X, N, a, b, total = 0;
	cin >> X >> N;

	for (int i = 1; i <= N; i++) {
		cin >> a >> b;
		total += a * b;
	}

	if (total == X) {
		cout << "Yes";
	}
	else
		cout << "No";
}
