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
    char c;cin>>c;
    string s;cin>>s;
    int l=0,r=n-1;
    int ans=0;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
            continue;
        }
        if(s[l]!=c) ans++;
        if(s[r]!=c)ans++;
        l++,r--;
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