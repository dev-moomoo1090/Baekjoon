#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int T; cin >> T;
    int zero[41] = {0};
    int one[41] = {0};

    zero[0] = 1; one[0] = 0;
    zero[1] = 0; one[1] = 1;

    for (int i = 2; i <= 40; i++) {
        zero[i] = zero[i-1] + zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }

    while (T--) {
        int k; cin >> k;
        cout << zero[k] << " " << one[k] << "\n";
    }
}
