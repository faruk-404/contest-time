#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()

void solve(){
    int n,k,m;cin>>n>>k>>m;
    if(k>m ){
        cn;
        return;}
    cy;
    for(int i=0;i<k-1;i++){
        cout<<1<<' ';
    }
    cout<<m-k+1<<' ';
    for(int i=k;i<n;i++)cout<<1<<' ';
    nf;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}