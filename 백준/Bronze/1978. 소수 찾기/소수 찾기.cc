#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	int N; cin >> N;
	bool isPrime = true;
	vector<int>number(N);
	int count = 0;
	for (int t = 0; t < N; t++) {
		cin >> number[t];
	}
	for (int i = 0; i < N; i++) {
		if (number[i] != 1 && number[i] !=0) {
			for (int j = 2; j <= number[i] - 1; j++) {	// 2 4 5 6
				if(number[i] % j == 0) isPrime = false;
			}
			if (isPrime)
				count++;
			isPrime = true;
		}
	}
	cout << count;
}	
