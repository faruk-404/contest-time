#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> pre(n + 1), pos(n);
    pos[n - 1] = a[n - 1];
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + a[i - 1];
    }
    for (int i = n - 2; i >= 0; i--) {
        pos[i] = pos[i + 1] + a[i];
    }
    int ans = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        ans = min(abs(pre[i] - pos[i]), ans);
    }
    cout << ans << '\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}