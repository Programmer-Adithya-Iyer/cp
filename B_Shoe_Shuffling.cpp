#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int &num : nums)
        cin >> num;

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int j = i + 1;
        while (j < n && nums[j] == nums[i]) {
            ans[j] = j;
            j++;
        }

        if (j == i + 1) {
            cout << -1 << endl;
            return;
        }

        ans[i] = j;
        i = j - 1;
    }

    for (int i = 0; i < n; i++) 
        cout << ans[i] << " ";

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();
}