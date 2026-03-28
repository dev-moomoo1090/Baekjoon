#include <iostream>
using namespace std;
int main() {
    int H, M;
    cin >> H >> M;
    int total = (H * 60 + M - 45 + 1440) % 1440;
    cout << total / 60 << " " << total % 60 << endl;
    return 0;
}