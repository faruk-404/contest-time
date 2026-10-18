#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mx=-1,mm=LLONG_MAX;
    for (auto &i : a){
        cin >> i;
        mx=max(mx,i);
        mm=min(mm,i);
    }
    
    int l=__lg(mm);
    for(int i=0;i<=__lg(mm);i++){
        if((mm>>i)&1){
            l=i;
            break;
        }
    }
    int r=0;
     for(int i=0;i<=__lg(mx);i++){
        if((mx>>i)&1){
            r=i;
            break;
        }
    }
    cout<<l<<": "<<r<<nl;
    vector<int> setbit(34, 0);
    for (auto k : a) {
        for (int i = __lg(k); i >= 0; i--) {
            if ((k >> i) & 1)
                setbit[i]++;
        }
    }
    for(int i=r;i>=0;i--)setbit[i]++;
    for(int i=__lg(mx);i>=l;i--)setbit[i]++;
    // for(int i=0;i<5;i++){
    //     cout<<setbit[i]<<' ';
    // }nf;
    int ans = 0;
    for (int i = 0; i < 34; i++)
        if (setbit[i])
            ans += (1 << i);
    cout << ans << nl;


    // for (int j = 0; j < n - 1; j++) {
    //     if (a[j] == a[j + 1])
    //         continue;
    //     vector<int> setbitb(34, 0);
    //     if (a[j] < a[j + 1]) {
    //         for (int i = __lg(a[j]); i >= 0; i--) {
    //             if ((a[j] >> i) & 1)
    //                 setbitb[i]--;
    //         }
    //         int x = a[j] + 1;
    //         for (int i = __lg(x); i >= 0; i--) {
    //             if ((x >> i) & 1)
    //                 setbitb[i]++;
    //         }
    //     } else {
    //         for (int i = __lg(a[j + 1]); i >= 0; i--) {
    //             if ((a[j + 1] >> i) & 1)
    //                 setbitb[i]--;
    //         }
    //         int x = a[j + 1] + 1;
    //         for (int i = __lg(x); i >= 0; i--) {
    //             if ((x >> i) & 1)
    //                 setbitb[i]++;
    //         }
    //     }


    //     int mx = 0;
    //     for (int i = 0; i < 34; i++)
    //         if ((setbit[i] + setbitb[i]) > 0)
    //             mx += (1 << i);
    //     ans = max(mx, ans);
    // }
    // cout<<ans<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}