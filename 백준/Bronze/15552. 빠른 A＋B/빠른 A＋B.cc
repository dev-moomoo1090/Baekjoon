#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) { // 반복문 초기 조건 수정으로 더 직관적
        int a, b;
        cin >> a >> b;
        cout << a + b << '\n'; // endl 대신 \n 사용
    }

    return 0;
}

