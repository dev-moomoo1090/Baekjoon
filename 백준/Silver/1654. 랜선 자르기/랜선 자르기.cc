#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main() {
	long long T, goal;
	cin >> T >> goal;
	long long max = -1;
	int count = 0;
	int count2 = 0;
	bool end = true;
	vector<int>test(T);
	for (int i = 0; i < T; i++) {	//입력
		cin >> test[i];
		if (test[i] > max)
			max = test[i];
	}
	long long x = 1;
	long long y = max;
	long long div = 0;
	long long result1 = 0;
	while (x<=y) {
		div = (x + y) / 2;
		count = 0;
		for (int j = 0; j < T; j++) {
			count += test[j] / div;
		}
		if (count >= goal) {
			result1 = div;
			x = div + 1;
		}	
		else {
			y = div - 1;
		}
	}
	std::cout << result1;
	
}	