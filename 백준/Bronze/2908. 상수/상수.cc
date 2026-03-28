#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int sa, sb;
	sa = ((a % 10) * 100) + (((a / 10) % 10) * 10) + (a / 100);
	sb = ((b % 10) * 100) + (((b / 10) % 10) * 10) + (b / 100);
	if (sa >= sb)
		cout << sa;
	else
		cout << sb;
}