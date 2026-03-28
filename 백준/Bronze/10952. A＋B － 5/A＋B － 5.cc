#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	int a,b;
	bool calcul = true;
	while (calcul) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			calcul = false;
		}
		else {
			cout << a + b << endl;
		}
	}
	
}