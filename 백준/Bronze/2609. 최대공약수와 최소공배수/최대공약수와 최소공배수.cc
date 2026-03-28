#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;
int gcd(int, int);
int main() {
	int a, b; cin >> a >> b;
	if (b != 0) {
		cout << gcd(a, b) << "\n";
		cout << (a * b) / gcd(a, b) << "\n";
	}

	return 0;
}		 
int gcd(int a, int b) {
	int temp;
	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}
