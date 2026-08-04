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
    vector<int> a(2*n),vis(n+1);
    for(auto &i:a)cin>>i;
    map<int,int> mp;
    for(int i=0;i<2*n;i++){
        vis[a[i]]=i+1-vis[a[i]];
        
    }
    for(auto i:vis)cout<<i<<' ';

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}