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
    int n, k;
    cin >> n >> k;
    if (n < k + 2) {
        cout << -1 << nl;
        return;
    }
    vector<int> a;
    for (int i = 0; i < (n - k - 2); i += 2) {
        a.push_back(1);
        a.push_back(0);
    }

    if (((n - k - 1) & 1)) {
        if (a.empty())
            a.push_back(0);
        else if (a.back() == 0)
            a.push_back(1);
        else
            a.push_back(0);
    }

    for (int i = 0; i <= k; i++)
        a.push_back(1);
    // if(a.size()==n)cy;
    for (auto i : a)
        cout << i;
    cout << '\n';
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