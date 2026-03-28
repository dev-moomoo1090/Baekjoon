#include <iostream>
using namespace std;
int main() {
	int total = 0, input = 0;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		total += input * input;
	}
	cout << total % 10;
}