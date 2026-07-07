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
    int a1=count(all(a),1);
    int a2=count(all(a),2);
    if(a1==n || a2==n){cout<<0<<nl;return;}
    if(a1&1){cout<<a2<<nl;return;}
    cout<<min((int)(ceil((double)a1/2)),a2)<<nl;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}