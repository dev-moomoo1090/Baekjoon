#include <iostream>
using namespace std;
int factorial(int a) {
	int value = 1;
	for (int i = 1; i <=a; i++) {
		value *= i;
	}
	return value;
}
int main() {
	int N, K; cin >> N >> K;
	int fac_N = factorial(N);
	int fac_K = factorial(K);
	int fac_NK = factorial(N - K);

	cout << fac_N / (fac_K * fac_NK);
}