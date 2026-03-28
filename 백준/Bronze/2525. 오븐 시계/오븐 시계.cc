#include <iostream>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B;
    cin >> C;
    
    cout << ((A * 60 + B + C + 1440) % 1440)/60 << " " << ((A * 60 + B + C + 1440) % 1440) % 60 << endl;
    return 0;
}