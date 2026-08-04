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
    int ans = 0;
    if (count(all(s), 'x') == n)
    {
        cout << n << nl;
        return;
    }
    if (n == 1 && s[0] == 'x')
        ans++;
    if (n >= 2 && s[0] == 'x' && s[1] == 'x')
        ans++;
    if (n >= 4 && s[n - 1] == 'x' && s[n - 2] == 'x')
        ans++;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == 'x' && s[i] == 'x' && s[i + 1] == 'x')
            ans++;
    }
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