#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    int val = 5001;
    int val5 = n / 5;    // 5가 몇개인지 val에 저장
    n %= 5;             // 남은 kg수가 몇인지 n에 저장
    while(true){
        int val3 = n / 3;
        if(val5 + val3 < val && n % 3 == 0) val = val5 + val3;
        if(val5 == 0) {
            break;
        }
        val5--;
        n += 5;
    }
    if(val != 5001)
        cout << val;
    else
        cout << -1;
}