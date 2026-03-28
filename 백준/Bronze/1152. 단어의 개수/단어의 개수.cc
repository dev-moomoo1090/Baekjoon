#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main() {
	string c;
	int count = 0;
	getline(cin, c);
	bool inword = false;
	for (int i = 0; i < c.length(); i++) {
		if (c[i] != ' ') {
			if (!inword) {
				count++;
				inword = true;
			}
		}
		else {
			inword = false;
		}
	}
	cout << count;
}