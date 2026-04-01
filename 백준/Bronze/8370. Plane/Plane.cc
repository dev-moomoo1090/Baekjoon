#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);  
    int n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    cout << n1 * n2 + k2 * k1;
}