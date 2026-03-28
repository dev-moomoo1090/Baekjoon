#include <iostream>
#include <string>
using namespace std;
bool check(string str,int temp) {
	int val = 0;
	for (int i = 0; i < temp; i++) {
		val += (str[i] == '(' ? 1 : -1);
		if (val == -1)
			break;
	}
	if (val == 0)
		return true;
	else
		return false;
}
int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		string str; cin >> str;
		int temp = str.size();
		if (check(str, temp)) {
			cout << "YES"<<"\n";
		}
		else
			cout << "NO"<<"\n";
	}
}