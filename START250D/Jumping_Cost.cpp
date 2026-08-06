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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    int l = 1;
    vector<int> pre;
    for (int i = 2; i <= n; i++) {
        if (a[i] < 0)
            continue;
        pre.push_back(a[i] - i + l);
        l = i;
    }
    int sum = 0;
    for (int i = 0; i < pre.size(); i++) {
        sum += pre[i];
        ans = max(ans, sum);
    }
    cout << ans << nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}