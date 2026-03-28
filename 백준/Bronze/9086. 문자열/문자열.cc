#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string S;
	int i;
	cin >> i;
	for (int j = 0; j < i; j++) {
		cin >> S;
		int k = S.length();
		cout << S.substr(0, 1) << S.substr(k - 1, 1) << endl;
	}
}
