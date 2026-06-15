#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> s(n), f(n);
    for (int &num : s)
        cin >> num;
    for (int &num : f)
        cin >> num;

    vector<int> ans(n);
    ans[0] = f[0] - s[0];

    for (int i = 1; i < n; i++) {
        ans[i] = f[i] - max(s[i], f[i - 1]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();
}