#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>& having, int find)
{
	auto lower = lower_bound(having.begin(),having.end(),find);
    auto upper = upper_bound(having.begin(),having.end(),find);
    return upper - lower;
}
int main() {
	int N; cin >> N;
	vector<int> having(N);
	for (int i = 0; i < N; i++) {
		cin >> having[i];
	}
	sort(having.begin(), having.end());
	int M; cin >> M;
	vector<int> solve(M);
	for (int i = 0; i < M; i++) {
		int sol; cin >> sol;
		solve[i] = binarysearch(having, sol);
	}
	bool first = true;
	for (int i = 0; i < solve.size(); i++) {
		if (first) {
			cout << solve[i];
			first = false;
		}
		else
			cout << " " << solve[i];
	}
}