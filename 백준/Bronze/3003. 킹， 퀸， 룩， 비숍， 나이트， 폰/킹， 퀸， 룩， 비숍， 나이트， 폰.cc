#include <iostream>
using namespace std;
int main() {
	int chess[7] = {1,1,2,2,2,8 };
	int input[7];
	for (int i = 0; i < 6; i++) {
		cin >> input[i];
	}
	for (int j = 0; j < 6; j++) {
		cout << chess[j] - input[j] << " ";
	}
}