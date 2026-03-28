#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;
bool compare(string& a, string& b) {
	if (a.length() != b.length()) {
		return a.length() < b.length();
	}

	return a < b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	set<string> words;
	int temp; cin >> temp;
	for (int i = 0; i < temp; i++) {	//set으로 중복제거
		string word;
		cin >> word;
		words.insert(word);
	}
	vector<string> sorts(words.begin(),words.end()); // vector값으로 변환
	sort(sorts.begin(), sorts.end(), compare);
	for (int i = 0; i < words.size(); i++) {
		cout << sorts[i] << "\n";
	}
}