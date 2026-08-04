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
    int a, b, c;
    cin >> a >> b >> c;
    set<int> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    int ans = 0;
    while (st.size() == 3)
    {
        int s = *st.begin();
        int en = *--st.end();
        st.erase(st.begin());
        st.erase(--st.end());
        st.insert(++s);
        st.insert(--en);
        ans++;
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