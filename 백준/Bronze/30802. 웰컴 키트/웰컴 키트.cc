#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;
static int tshirt(int a, int b) {
	int t_total = 0;
	t_total = (a / b) + 1;
	if (a % b == 0)
		t_total--;

	return t_total;
}
int main() {
	int S, M, L, XL, XXL, XXXL;
	int N, T, P;
	int t_total = 0;
	cin >> N;
	cin >> S >> M >> L >> XL >> XXL >> XXXL;
	cin >> T >> P;
	t_total += tshirt(S, T) + tshirt(M, T) + tshirt(L, T) + tshirt(XL, T) + tshirt(XXL, T) + tshirt(XXXL, T);

	cout << t_total << "\n";
	cout << N / P << " " << N % P << "\n";

}