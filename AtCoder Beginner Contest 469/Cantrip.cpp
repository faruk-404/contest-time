#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> cnt(n);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
            cnt[i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        cnt[i] += cnt[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        auto it = lower_bound(cnt.begin(), cnt.end(), i);
        int ans = (it - cnt.begin()) + 1;
        cout << (int)min(ans, n) << nl;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}