#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int mod=998244353;
int  bigmod(int a,int b){
    if(b==0)return 1;
    if(b&1){
        return (a%mod*bigmod(a,b-1)%mod)%mod;
    }
    int tmp=bigmod(a,b/2)%mod;
    return (tmp*tmp)%mod;
}
int modI(int  a){
    return bigmod(a,mod-2);
}

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int sum=0;
    for(auto i:a){
        sum+=(i*(n+1));
        sum%=mod;
    }
    int ans=sum*modI(2)%mod;
    cout<<ans<<nl;


}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}