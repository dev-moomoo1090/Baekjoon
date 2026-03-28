#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int a, b, c;
	int max, n1, n2;
	while (true) {
		cin >> a >> b >> c;
		max = c;
		n1 = a;
		n2 = b;
		if (max < b) {
			max = b;
			n1 = c;
			n2 = a;
		}
		if (max < a) {
			max = a;
			n2 = b;
			n1 = c;
		}
		if (n1 == 0 && n2 == 0 && max == 0)
		{
			break;
		}
		if (max * max == n1 * n1 + n2 * n2)
		{
			cout << "right" << endl;
		}
		else
			cout << "wrong" << endl;
	}
}