#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &num : a)
        cin >> num;
    for (int &num : b)
        cin >> num;

    int k = a[0] - b[0];
    for (int i = 0; i < n; i++) {
        k = max(k, a[i] - b[i]);
    }

    if (k < 0) {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (b[i] == 0 && a[i] >= 0 && a[i] <= k) continue;

        if (a[i] - b[i] != k) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();
}