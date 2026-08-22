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
    sort(all(a));
    int cc = 0;
    if (a[0] == 0)
        for (int i = 1; i < n; i++) {
            if (a[i] - 1 == a[i - 1] || a[i] == a[i - 1])
                cc = i;
            else
                break;
        }
   // cout << a[cc] << nl;
    map<int, int> mp;
    for (auto i : a) {
        mp[i]++;
    }
    vector<int> cnt(100 + 1);
    for (auto [i, j] : mp)
        cnt[i] = j;
    int ans=0;
    for (int i = 0; i <=a[cc]; i++) {
        cout << cnt[i] << nl;
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