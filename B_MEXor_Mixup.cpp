#include <bits/stdc++.h>
using namespace std;

void solve() {
    int mex, x;
    cin >> mex >> x;

    if (x < mex) {
        cout << mex << endl;
    } else if (x == mex) {
        cout << mex + 2 << endl;
    } else {
        cout << mex + 1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();
}