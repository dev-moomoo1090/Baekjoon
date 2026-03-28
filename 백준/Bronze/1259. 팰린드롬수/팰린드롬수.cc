#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
	int N;
	int count;
	do {
		cin >> N;
		int M = N;
		count = 0;
		int t_count = 0;
		for (int i = 0; i < to_string(N).length(); i++) { // 321
			count += M % 10; // 123
			t_count = count;
			count *= 10; // 1230
			M /= 10; // 3
		}
		if (N != 0) {
			cout << (t_count == N ? "yes" : "no") << "\n";
		}
	} while (N != 0);
}		 
