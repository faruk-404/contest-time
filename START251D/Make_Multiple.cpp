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
    int cnt = n % 3;
    if (cnt == 0)
        cout << 0 << nl;
    else {
        int nn = n / 5;
        nn++;
        if (nn % 3 == 0)
            cout << 1 << nl;
        else {
            cout << min((int)2, (3 - cnt)) << nl;
        }
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