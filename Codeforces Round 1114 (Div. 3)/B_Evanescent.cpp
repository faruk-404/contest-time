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
    bool ok = false, okk = false;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] != s[i] && s[i + 1] != s[i])
        {
            ok = true;
        }
        if (s[i - 1] != s[i] && s[i + 1] != s[i] && s[i - 1] == s[i + 1])
        {
            okk = true;
            break;
        }
    }
    s.erase(unique(s.begin(), s.end()), s.end());
    if (okk)
        cout << s.size() - 2 << nl;
    else if (ok)
        cout << s.size() - 1 << nl;
    else
        cout << s.size() << nl;
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