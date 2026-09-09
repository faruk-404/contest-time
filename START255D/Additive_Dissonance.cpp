#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n;cin>>n;
    map<int,int> mp;
    int mx=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
        mx=max(mx,mp[x]);
    }
    cout<<max((mx+1)/2,1LL)<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}