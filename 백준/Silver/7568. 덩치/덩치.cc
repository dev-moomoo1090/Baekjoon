#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;      // 몸무게
    int y;      // 키
    int rank;   // 등수
};

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;
    vector<Point> arr;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y, 0});
    }

    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = 0; j < n; j++) {
            if (arr[j].x > arr[i].x && arr[j].y > arr[i].y) {
                cnt++;
            }
        }
        arr[i].rank = cnt;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i].rank << " ";
    }

    return 0;
}