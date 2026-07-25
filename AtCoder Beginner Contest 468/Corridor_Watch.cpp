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
    int n, g;
    cin >> n >> g;
    string s;
    cin >> s;
    vector<bool> vis(n, false);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'G')
            cnt = g;
        else if (cnt > 0)
        {
            vis[i] = true;
            cnt--;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'G')
        {
            cnt = g;
            vis[i] = true;
        }
        else if (cnt > 0)
        {
            vis[i] = true;
            cnt--;
        }
    }
    int ans = 0;
    for (auto i : vis)
        if (!i)
            ans++;
    cout << ans << nl;
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