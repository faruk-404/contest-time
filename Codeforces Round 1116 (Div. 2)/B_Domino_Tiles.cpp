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
    if (count(s.begin(), s.end(), '?') == n) {
        cout << 4 << nl;
        return;
    }
    string ss = "", sss = "";
    string z = "00", o = "11";
    for (int i = 0; i < n / 2; i++) {
        if (i & 1) {
            ss += z;

            sss += o;
        } else {
            ss += o;
            sss += z;
        }
    }
    string tt = '0' + ss, ttt = '1' + sss;
    tt.pop_back();
    ttt.pop_back();
    if (n & 1) {
        if (ss.back() == '0') {
            ss += '1';
            ttt += '1';
            sss += '0';
            tt += '0';
        } else {
            ss += '0';
            ttt += '0';
            sss += '1';
            tt += '1';
        }
    }

    int ans = 4;
    for (int i = 0; i < n; i++) {
        if (s[i] == '?')
            continue;
        if (s[i] != ss[i]) {
            ans--;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '?')
            continue;
        if (s[i] != sss[i]) {
            ans--;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '?')
            continue;
        if (s[i] != tt[i]) {
            ans--;
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == '?')
            continue;
        if (s[i] != ttt[i]) {
            ans--;
            break;
        }
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