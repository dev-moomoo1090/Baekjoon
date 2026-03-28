#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
string chess[9][9];
static int counter(int y, int x, const vector<vector<string>>& count) {
	int val = 0;
	for (int i = y; i < y + 8; i++) {
		for (int j = x; j < x + 8; j++) {
			if (chess[j - x][i - y] != count[j][i]) { // 체스는 0~7 count 만약에 1을 받으면 1~8까지
				val++;
			}	
		}
	}
	if (val > 32)
		val = 64 - val;
	return val;
}
int main() {
	string wb = "W";
	int cy, cx;
	cin >> cy >> cx;
	int min = 999999;
	int xx = 0;
	string input;
	vector<vector<string>> count(cx, vector<string>(cy, " "));
	int index = 0;
	for (int i = 0; i < cy; i++) {		//input
		cin >> input;
		for (int j = 0; j < cx; j++) {
			count[j][i] = input[index++];
		}
		index = 0;
	}
	for (int y = 0; y < 8; y++) {		// chessboard
		for (int x = 0; x < 8; x++) {
			chess[x][y] = wb;
			if (wb == "W")
				wb = "B";
			else
				wb = "W";
		}
		if (wb == "W")
			wb = "B";
		else
			wb = "W";
	}
	for (int k = 0; k <= cy - 8; k++) {
		for (int m = 0; m <= cx - 8; m++) {
			xx = counter(k, m, count);
			if (min > xx) {
				min = xx;
			}
		}
	}
	cout << min;
}