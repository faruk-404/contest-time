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
    int x, y, z;
    cin >> x >> y >> z;
    int ans = 1;
    int zz = z;
    if (x + y <= z)
    {
        cout << 1 << nl;
        return;
    }
    if (y >= z)
    {
        cout << -1 << nl;
        return;
    }
    while (x + y > z)
    {
        ans++;
        z += zz;
        x += y;
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