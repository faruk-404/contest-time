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
    map<int, int> mp;
    for (auto i : a)
        mp[-i]++;
    while (!mp.empty()) {
        for (auto it = mp.begin(); it != mp.end();) {
            int x = it->first;
            int y = it->second;
            cout << -x << ' ';
            if (y <= 1)
                it = mp.erase(it);
            else {
                it->second--;
                it++;
            }
        }
    }
    nf;
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