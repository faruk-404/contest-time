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
            cout << 0 << nl;
        else
            cout << -1 << nl;
        return;
    }
    if (count(all(s), '1') != count(all(t), '1'))
    {
        cout << -1 << nl;
        return;
    }
    vector<int> sev, sod, tev, tod;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (i & 1)
                sod.push_back(i);
            else
                sev.push_back(i);
        }
        if (t[i] == '1')
        {
            if (i & 1)
                tod.push_back(i);
            else
                tev.push_back(i);
        }
    }
    if (sod.size() == tod.size() && sev.size() == tev.size())
    {
        int cnt = 0;
        for (int i = 0; i < sod.size(); i++)
        {
            cnt += abs(sod[i] - tod[i]);
        }
        for (int i = 0; i < sev.size(); i++)
        {
            cnt += abs(sev[i] - tev[i]);
        }
        cout << cnt / 2 << nl;
    }
    else
        cout << -1 << nl;
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