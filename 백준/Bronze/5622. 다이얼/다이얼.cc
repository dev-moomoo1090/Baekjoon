#include <iostream>
using namespace std;
int main() {
	string input;
	cin >> input;
	int time = 0;
	for (int i = 0; i < input.size(); i++) {
		time += ((int)input[i] - 65) / 3 + 3;
		if (input[i] == 'S' || input[i] == 'V' || input[i] == 'Y' || input[i] == 'Z')
			time--;
	}
	cout << time;
}