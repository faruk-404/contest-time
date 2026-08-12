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
    int cnt = 0;
    for (auto i : a)
        if (i & 1)
            cnt++;
    if (accumulate(a.begin(), a.end(), 0LL) & 1) {
        cout << cnt / 2 << nl;
        return;
    }

    cout << accumulate(a.begin(), a.end(), 0LL) - cnt / 2 << nl;
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