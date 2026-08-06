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
        vector<int> v=a;
    for (int j = 0; j < 100; j++) {
        for (int i = 1; i < n - 1; i++) {
            if ((a[i - 1] & 1) && (!(a[i + 1] & 1)) ||
                (!(a[i - 1] & 1) && (a[i + 1] & 1)))
                continue;
            int x = a[i - 1] - a[i] + a[i + 1];
            v[i] = min(v[i],x);
        }
        for(int i=0;i<n;i++){
            a[i]=min(a[i],v[i]);
        }
    }
    for (auto i : a)
        cout << i << ' ';
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