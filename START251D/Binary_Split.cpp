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
    string sss = s;
    sss.erase(unique(sss.begin(), sss.end()), sss.end());
    if (sss.size() > 2) {
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0')
                s.pop_back();
            else {
                break;
            }
        }
    }
    // cout << s << nl;
    set<string> ss;
    ss.insert(s);

    int j = 0;
    int a = 0, b = 0;
    for (int i = s.size() - 1; i > 0; i--) {
        if (a && s[i] == '0' && s[i - 1] == '1') {
            ss.insert(s.substr(i, j + 1));
            a = j = 0;
        } else {
            if (s[i] == '1')
                a++;

            j++;
        }
    }
    ss.insert(s.substr(0, j + 1));
    cout << *ss.begin() << nl;
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