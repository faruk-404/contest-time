#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define ll long long
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    int an=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]-i]++;
        an=max(mp[a[i]-i],an);
    }
    cout<<n-an<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}