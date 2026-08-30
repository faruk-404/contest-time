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
    int a,b;
    cin>>a>>b;
    int x,y;cin>>x>>y;
    int m,n;cin>>m>>n;
    int xx=(abs(a-x)*abs(a-x))+(abs(b-y)*abs(b-y));
    int yy=(abs(x-m)*abs(x-m))+(abs(y-n)*abs(y-n));
    int zz=(abs(m-a)*abs(m-a))+(abs(n-b)*abs(n-b));
    vector<int > aa;
    aa.push_back(xx);
    aa.push_back(yy);
    aa.push_back(zz);
    // cout<<xx<<' '<<yy<<' '<<zz<<nl;
    sort(all(aa));
    if((aa[0]+aa[1])==aa[2])cout<<"Yes\n";
    else cout<<"No\n";
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}