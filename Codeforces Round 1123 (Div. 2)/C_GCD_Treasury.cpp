#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

const int N = 3e5 + 5;
vector<int> spf(N);
void SPF() {
    for (int i = 0; i < N; i++)
        spf[i] = i;
    for (int i = 2; i < N; i++) {
        if (spf[i] != i)
            continue;
        for (int j = i; j < N; j += i) {
            if (spf[j] == j)
                spf[j] = i;
        }
    }
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> cnt;
    int xx = x;
    while (xx > 1) {
        int p = spf[xx];
        cnt.push_back(p);
        while (xx % p == 0) {
            xx /= p;
        }
    }
    // for(auto i:cnt)cout<<i<<' ';nf;
    int ans=0;
    for(int i:cnt){
        int sum=0;
        for(int j=0;j<n;j++){
            if(a[j]%i==0) sum+=a[j];
        }
        ans=max(sum,ans);
    }
    cout<<ans<<nl;
}
    int32_t main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        SPF();
        int t = 1;
        cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }