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
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int kk=n-k;
    int sum=0;
    for(int i=0;i<kk;i++)sum+=a[i];
    int ans=sum;
    for(int i=kk,l=0;i<n;i++,l++){
        sum+=a[i];
        sum-=a[l];
        ans=max(sum,ans);
    }
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