#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
using namespace std;
bool compare(const tuple<int, string>& a, const tuple<int, string>& b) {
	return get<0>(a) < get<0>(b);
}
int main() {
	int n; cin >> n;
	vector<tuple<int,string>> dict;
	int old;
	string name;
	for (int i = 0; i < n; i++) {
		cin >> old >> name;
		dict.push_back({ old,name });
	}
	stable_sort(dict.begin(), dict.end(),compare);
	for (int i = 0; i < n; i++) {
		cout << get<0>(dict[i]) << " " << get<1>(dict[i]) << "\n";
	}
}