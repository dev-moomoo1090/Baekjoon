#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
string bombchar(string& input, string& bomb) {
	string result;
	int BombSize = bomb.size();
	for (char k : input) {
		result += k;

		if (result.size() >= BombSize && result.substr(result.size() - BombSize) == bomb) {
			result.erase(result.size() - BombSize);
		}
	}
	return result;
}
int main() {//156515616561568984949
	string s, bomb; cin >> s >> bomb;

	string result = bombchar(s, bomb);
	cout << (result == "" ? "FRULA" : result);
}