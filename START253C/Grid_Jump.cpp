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
    int a, b, p, q, r;
    cin >> a >> b >> p >> q >> r;
    int s = (((a + 1) / 2) * p) + (((b + 1) / 2) * q);
    int ss = min(a, b) * r;
    if (a > b)
        ss += (((a - b) + 1) / 2) * p;
    else
        ss += (((b - a) + 1) / 2) * q;
    cout << (int)min(s, ss) << nl;
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