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
    string s, t;
    cin >> s >> t;
    if (n <= 2)
    {
        if (s == t)
            cy;
        else
            cn;
        return;
    }
    if (count(all(s), '1') != count(all(t), '1'))
    {
        cn;
        return;
    }
    int sev = 0, sod = 0, tev = 0, tod = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (i & 1)
                sod++;
            else
                sev++;
        }
        if (t[i] == '1')
        {
            if (i & 1)
                tod++;
            else
                tev++;
        }
    }
    if (sod == tod && sev == tev)
        cy;
    else
        cn;
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