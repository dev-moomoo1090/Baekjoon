#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main() {
	string input;
	string total_input;
	while (getline(cin, input)) {
		total_input += input + '\n';
	}
	cout << total_input;
}