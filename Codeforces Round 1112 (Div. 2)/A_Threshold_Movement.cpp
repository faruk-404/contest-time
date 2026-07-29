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
    if (n == 1)
    {
        cn;
        return;
    }
    int mx = *max_element(all(a));
    int mm = mx - 1;
    int cntmx = count(a.begin(), a.end(), mx);
    int cnt = count(a.begin(), a.end(), mm);
    if (((a[0] == mx && a[0] - a[1] > 1) || (a[n - 1] == mx && a[n - 1] - a[n - 2] > 1)))
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