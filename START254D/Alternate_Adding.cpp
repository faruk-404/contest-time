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
    vector<int>a(n);
    for(auto &i:a)cin>>i;
    if(a[0]<0 && a[1]>0)a[1]=max(a[0]+a[1],0LL);
    if(a[n-1]<0 && a[n-2]>0)a[n-2]=max(a[n-1]+a[n-2],0LL);
    for(int i=1;i<n-1;i++){
        if(a[i]<0 && a[i-1]>0)a[i-1]=max((a[i]+a[i-1]),0LL);
        if(a[i]<0 && a[i+1]>0)a[i+1]=max((a[i]+a[i+1]),0LL);
    }
    int ans=0;
    for(auto &i:a)ans+=abs(i);
    cout<<ans<<nl;
   
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}