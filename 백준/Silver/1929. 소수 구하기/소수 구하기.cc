#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main() {
	int M, N; cin >> M >> N;
	
	vector<bool> isPrime(N + 1,true);
	isPrime[0] = isPrime[1] = 0;

	for (int i = 2; i * i <= N; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= N; j += i)
				isPrime[j] = false;
		}
	}

	for (int num = M; num <= N; num++) {
		if (isPrime[num]) cout << num << "\n";
	}
}	