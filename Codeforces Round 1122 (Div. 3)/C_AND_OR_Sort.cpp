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
    string s;cin>>s;
    int l=0,r=n-1;
    while(l<n && s[l]=='0')l++;
    while(r>=0 && s[r]=='1')r--;
    if(l>=r){
        cout<<0<<nl;
        return;
    }
    if(s[0]=='1'){
        cout<<count(all(s),'0')<<nl;
        return;
    }
    vector<int> dp(n+2),dp2(n+2);
    for(int i=l;i<=r;i++){
        if(s[i]=='1')dp[i]++;
        dp[i]+=dp[i-1];
    }
    for(int i=r;i>=l;i--){
        if(s[i]=='0')dp2[i]++;
        dp2[i]+=dp2[i+1];
    }
    int ans=LLONG_MAX;
    for(int i=l-1;i<=r;i++){
        ans=min(ans,dp[i]+dp2[i+1]);
    

    }
    cout<<ans<<nl;
    // for(auto i:dp)cout<<i<<' ';nf;
    // for(auto i:dp2)cout<<i<<' ';nf;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}