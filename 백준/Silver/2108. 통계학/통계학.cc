#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> counter(8001, 0);
    vector<int> arr(n);
    int sum = 0;

    int minVal = 4001;
    int maxVal = -4001;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        counter[arr[i] + 4000]++;
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    int avg = (sum >= 0) ? (sum + n / 2) / n : (sum - n / 2) / n;

    if (avg == 0) cout << 0 << "\n";
    else cout << avg << "\n";

    sort(arr.begin(), arr.end());
    cout << arr[n / 2] << "\n";

    int modeMax = 0;
    for (int i = 0; i <= 8000; i++) {
        if (counter[i] > modeMax) {
            modeMax = counter[i];
        }
    }

    vector<int> modeCandidates;
    for (int i = 0; i <= 8000; i++) {
        if (counter[i] == modeMax) {
            modeCandidates.push_back(i - 4000);
        }
    }

    if (modeCandidates.size() > 1) {
        cout << modeCandidates[1] << "\n";
    } else {
        cout << modeCandidates[0] << "\n";
    }

    cout << maxVal - minVal << "\n";

    return 0;
}
