#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n = 0;
	int N = 0; cin >> N;
	vector<int> arr(n);

	for (int i = 0; i < N; i++) {
		string order; cin >> order;

		if (order == "push") {
			int enter; cin >> enter;
			arr.push_back(enter);
			n++;
		}
		else if (order == "pop") {
			if (n == 0)
			{
				cout << -1 << endl;
			}
			else {
				cout << arr[n-1] << endl;
				arr.pop_back();
				n--;
			}
		}
		else if (order == "size") {
			cout << n << endl;
		}
		else if (order == "empty") {
			cout << (n == 0 ? 1 : 0) << endl;
		}
		else if (order == "top") {
			if (n != 0)
				cout << arr[n-1]<< endl;
			else
				cout << -1 << endl;
		}
			
	}
}
