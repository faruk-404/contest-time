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
    vector<int> a(n),b(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    if(a==b){cout<<0<<nl;return;}
    int ca=count(all(a),1);
    int cb=count(all(b),1);
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(a[i]==b[i])l=i+1;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==b[i])r=i-1;
    }
    vector<int> aa,bb;
    for(int i=l;i<=r;i++){
        aa.push_back(a[i]);
    }
    for(int i=l;i<=r;i++){
        bb.push_back(b[i]);
    }

    if(ca<cb){cout<<-1<<nl;return;}
    if(ca&1)cout<<1<<nl;
    else cout<<2<<nl;
    
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}