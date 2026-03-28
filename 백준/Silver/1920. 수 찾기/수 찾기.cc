#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; cin >> N;
	unordered_map<int, int> hashmap;
	for (int i = 0; i < N; i++) {	//비교군
		int number; cin >> number;
		hashmap[number] = 1;
	}
	int M; cin >> M;
	vector<int> ans_arr(M);
	for (int i = 0; i < M; i++) {	//실험군
		int searchnum;
		cin >> searchnum;
		if (hashmap.find(searchnum) != hashmap.end()) {
			ans_arr[i] = 1;
		}
		else
			ans_arr[i] = 0;
	}
	for (int output : ans_arr) {
		cout << output << "\n";
	}
}