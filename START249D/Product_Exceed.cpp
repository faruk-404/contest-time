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
    int x, y, p;
    cin >> x >> y >> p;
    if (x * y >= p)
    {
        cout << 0 << nl;
        return;
    }
    int ans = 0;
    while (1)
    {
        if (x * y >= p)
            break;
        ans++;
        if (x >= y)
            y++;
        else
            x++;
    }
    cout << ans << nl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}