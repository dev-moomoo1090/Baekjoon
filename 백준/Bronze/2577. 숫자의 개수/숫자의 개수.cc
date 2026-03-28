#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int total = a * b * c;
	string s_total = to_string(total);
	int count = 0;
	for (int i = 0; i < 10; i++) {
		char character = '0' + i;
		for (int j = 0; j < s_total.size(); j++) {
			if (s_total[j] == character) {
				count++;
			}
		}
		cout << count << endl;
		count = 0;
	}
}