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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    if (n < (m * 2))
    {
        cn;
        return;
    };
    sort(all(a));
    sort(all(b));
    a.push_back(a[n - 1] + 1);
    map<int, int> mp;
    mp[a[0]]++;
    mp[a[0] - 1] = 0;
    for (int i = 1; i <= n; i++)
    {
        mp[a[i]] = mp[a[i - 1]] + 1;
    }
    bool ok = false;
    for (int i = 0; i < m; i++)
    {
        auto it = --mp.lower_bound(b[i] + 1);
        int x = it->first;
        int y = it->second;
        if (!(y >= (i + 1) && (n - y) >= (m - i)))
        {
            ok = true;
            break;
        }
    }
    if (ok)
    {
        cn;
    }
    else
    {
        cy;
    }
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