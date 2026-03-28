#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b - c << "\n";
	string ca = to_string(a);
	string cb = to_string(b);
	cout << stoi(ca + cb) - c;
}