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
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    for(auto &i:a) i%=4;
    int ans=0;
    map<int,int> mp;
    int mx=-1;
    for(auto i:a){
        mp[i]++;
        mx=max(mp[i],mx);
        if(i&1)ans++;
    }
    cout<<max(ans,mx)<<nl;
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}