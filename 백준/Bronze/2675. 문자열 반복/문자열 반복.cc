#include <iostream>
#include <string>
using namespace std;
int main() {
    int test = 0;
    int test2 = 0;
    cin >> test;
    for (int i = 0; i < test; i++) {
        string s_case;
        cin >> test2;
        cin >> s_case;
        for (char digit : s_case) {
            for (int j = 0; j < test2; j++) {
                cout << digit;
            }
        }
        cout << endl;
    }
}
