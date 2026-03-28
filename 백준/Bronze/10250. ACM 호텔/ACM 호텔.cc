#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int T, W, H, N;
	cin >> T;	
	int count = 1;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		for (int j = 1; j <= W; j++) {
			for (int k = 1; k <= H; k++) {
				if (count == N) {
					H = k;
					W = j;
					break;
				}
				count++;
			}
		}
		cout << H << setfill('0') << setw(2) << W << endl;
		count = 1;
	}
}