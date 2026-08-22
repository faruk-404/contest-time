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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<int> pre(n + 1);
    vector<string> s;
    int sum = 0;
    for (int i = 1; i <= m; i++) {
        if ((sum + a[i]) <= k) {
            sum = sum + a[i];
            pre[i] = a[i];
            s.push_back("Yes");
        } else {
            s.push_back("No");
        }
    }
    for (int i = m + 1; i <= n; i++) {
        sum = sum - pre[i - m];
        if ((sum + a[i]) <= k) {
            sum += a[i];
            pre[i] = a[i];
            s.push_back("Yes");
        } else {
            s.push_back("No");
        }
    }
    for (auto i : s)
        cout << i << nl;
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