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
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> v = a;
    reverse(all(v));
    if (a == v)
    {
        cy;
        return;
    }
    bool ok = false;
    int mx = LLONG_MIN, mm = LLONG_MAX;
    for (int i = 0; i < n / 2; i++)
    {
        if (abs(a[i] - a[n - 1 - i]) == 0)
            continue;
        if (!(abs(a[i] - a[n - 1 - i]) == 2))
        {
            ok = true;
            break;
        }
        if (a[i] <= a[n - 1 - i])
        {
            mx = max(a[i], mx);
            mm = min(a[n - 1 - i], mm);
        }
        else if (a[i] > a[n - 1 - i])
        {
            mm = min(a[i], mm);
            mx = max(a[n - 1 - i], mx);
        }
    }
    if (ok)
    {
        cn;
        return;
    }
    if (mm - mx >= 1)
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