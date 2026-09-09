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
    string s,t;cin >>s>>t;
    int c1=count(all(s),'a');
    int c2=count(all(s),'b');
    int c3=count(all(t),'a');
    int c4=count(all(t),'b');
    if(c1==c4)cy;
    else cn;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}