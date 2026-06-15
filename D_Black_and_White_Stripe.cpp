#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int nw = 0;
    
    int i = 0;
    for (; i < k; i++) {
        if (s[i] == 'W') nw++;
    }

    int ans = nw;

    for (; i < n; i++) {
        if (s[i - k] == 'W') nw--;
        if (s[i] == 'W') nw++;
        
        ans = min(ans, nw);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();
}