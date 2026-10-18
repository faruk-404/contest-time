#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    if (n == 2 && ((a[0] + a[1]) & 1)) {
        cout << "Larpity\n";
        return;
    }
    int ev = 0, od = 0;
    for (auto i : a) {
        if (i & 1)
            od++;
        else
            ev++;
    }
    if((od&1) && (n==od) && n>1){
        cout << "Larpity\n";
        return;

    }
    cout << "Moggity\n";
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