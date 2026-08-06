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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int aa = abs(a - x);
    int bb = abs(b - y);
    if (((aa & 1) && !(bb & 1)) || (!(aa & 1) && (bb & 1))) {
        cout << -1 << nl;
        return;
    }
    if (aa == 0 && bb == 0) {
        cout << 0 << nl;
    } else if (aa == bb) {
        cout << 1 << nl;
    } else {
        cout << 2 << nl;
    }
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