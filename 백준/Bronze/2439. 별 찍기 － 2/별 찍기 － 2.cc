#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int space = n - i; space >= 1; space--) {
			cout << " ";
		}
		for (int star = 1; star <= i; star++) {
			cout << "*";
		}
		cout << "\n";
	}
}