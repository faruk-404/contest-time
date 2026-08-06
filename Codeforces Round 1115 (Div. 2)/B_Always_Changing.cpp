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
    string s;
    cin >> s;
    int on = count(s.begin(), s.end(), '1');
    int ze = count(s.begin(), s.end(), '0');
    if ((int)abs(on - ze) > 2) {
        cout << -1 << nl;
        return;
    }
    string t = s;
    s.erase(unique(s.begin(), s.end()), s.end());
    int on1 = count(s.begin(), s.end(), '1');
    int ze1 = count(s.begin(), s.end(), '0');
    if (abs((on - on1) - (ze - ze1)) <= 1) {
        cout << n - s.size() << nl;
    } else
        cout << n - s.size() + (abs((on - on1) - (ze - ze1)) - 1) << nl;
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