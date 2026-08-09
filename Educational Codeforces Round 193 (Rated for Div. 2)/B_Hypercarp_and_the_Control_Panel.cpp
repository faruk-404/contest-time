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
    set<int> st;
    for (auto &i : a) {
        cin >> i;
        st.insert(i);
    }
    if (n < 3) {
        if (a[0] == a[1])
            cout << 1 << nl;
        else
            cout << max((int)1, n) << nl;
        return;
    }
    vector<int> v = a;
    vector<int> is(*--st.end() + 1, 0), si(*--st.end() + 1, 0);
    v.erase(unique(v.begin(), v.end()), v.end());
    if (v.size() == a.size()) {
        cout << n << nl;
        return;
    }
    if (st.size() == 1) {
        cout << 1 << nl;
        return;
    }
    if (v.size() == (n - 1)) {
        if ((a[0] == a[n - 1] && (a[0] != a[1] && a[n - 1] != a[n - 2]))) {
            cout << n << nl;
            return;
        }
    }

    for (int i = 1; i < n - 1; i++) {
        if (a[i] == a[i - 1] && a[i] == a[i + 1]) {
            is[a[i]] = 3;
        }
    }
    if (count(is.begin(), is.end(), 3) > 1) {
        cout << v.size() + 4 << nl;
        return;
    }
    is = si;
    for (int i = 1; i < n - 1; i++) {
        if ((a[i] == a[i - 1] && a[i] == a[i + 1])) {
            is[a[i]] = 3;
        }
        if ((a[i] == a[i - 1] || a[i] == a[i + 1]) && is[a[i]] != 3) {
            is[a[i]] = 2;
        }
    }
    if (count(is.begin(), is.end(), 3) && count(is.begin(), is.end(), 2)) {
        cout << v.size() + 3 << nl;
        return;
    }
    if (count(is.begin(), is.end(), 2) > 1) {
        cout << v.size() + 2 << nl;
        return;
    }
    if (st.size() == 2 && v.size() == 3 || (st.size() == 2 && v.size() == 2)) {
        cout << 3 << nl;
        return;
    }
    if (count(is.begin(), is.end(), 2) > 2 && st.size() > 2) {
        cout << v.size() + 1 << nl;
        return;
    }
    cout << min(n, (int)(v.size() + 1)) << nl;
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