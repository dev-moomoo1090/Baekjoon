#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int N;
	cin >> N;
	int score = 0, add = 1;
	string total;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		for (int j = 0; j < input.size(); j++) {
			if (input[j] == 'O') {
				score += add;
				add++;
			}
			else {
				add = 1;
			}
		}
		total += to_string(score) +'\n';
		score = 0;
		add = 1;
	}
	cout << total;
}