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
	int n; cin >> n;
	int count = 1;
	int i = 1;
	int temp = 1;
	bool val = true;
	if (n == 1) {
		cout << temp;
		val = false;
	}
	while (val) {
		temp++;
		for (int j = 0; j < i * 6; j++) {
			count++;
			if (n == count) {
				cout << temp;
				val = false;
			}
		}
		i++;
	}
}	
