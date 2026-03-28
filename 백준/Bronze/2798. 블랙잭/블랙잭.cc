#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
	int N, goal; cin >> N >> goal;
	int count = 0;
	int moomoo = 0;
	vector<int>input1(N);
	vector<int>input2(N);
	vector<int>input3(N);
	int near = 0;
	for(int i = 0; i < N; i++){
		cin >> moomoo;
		input1[i] = moomoo;
		input2[i] = moomoo;
		input3[i] = moomoo;
	}

	for (int temp1 = 0; temp1 < N; temp1++) {

		for (int temp2 = 0; temp2 < N; temp2++) {

			for (int temp3 = 0; temp3 < N; temp3++) {

				if (temp1 != temp2 && temp2 != temp3 && temp3 != temp1) {
					count += input1[temp1] + input2[temp2] + input3[temp3];
					if (goal >= count && near < count) {
						near = count;
					}
					count = 0;
				}
			}
		}
	}
	cout << near;

}		 
