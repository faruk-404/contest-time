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
    vector<int> a;
    int l = 0;
    while (l < n) {
        int cnt = 0;
        while (s[l] == '0' && l < n) {
            cnt++;
            l++;
        }
        if (cnt)
            a.push_back(cnt);
        cnt = 0;
        while (s[l] == '1' && l < n) {
            cnt++;
            l++;
        }
        if (cnt)
            a.push_back(cnt);
    }
    int ans = 0;
    for (int i = 0; i < a.size(); i++) {
        int cnt = 0;
        for (int j = i, k = 0; j < a.size() && k < 4; j++, k++) {
            cnt += a[j];
        }
        ans = max(cnt, ans);
    }
    if (a.size() == 1)
        ans--;
    else
        ans -= 2;
    int ans2 = 0;
    int sz = a.size();
    if (a.size() > 2) {
        for (int i = 1; i < sz - 1; i++) {
            ans2 = max(a[0] + a[i + 1] + a[i], ans2);
        }
        for (int i = 0; i < sz - 2; i++) {
            ans2 = max(a[i] + a[i + 1] + a[sz - 1], ans2);
        }
        ans2 -= 2;
    }
    cout << max(ans, ans2) << nl;
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