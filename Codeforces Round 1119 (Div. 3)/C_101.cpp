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
    int l=0;
    for(int i=0;i<n;i++){
        if(a[i]==1 || a[i]==-1){
            l=i;break;
        }
    }
    int r=n-1;
    for(int i=n-1;i>=0;i--){
        if(a[i]==1 || a[i]==-1){
            r=i;break;
        }
    }
    for(int i=0;i<n;i++){
        if(l==i || r==i)a[i]=abs(a[i]);
        if(a[i]==-1)a[i]=0;
    }

    for(auto i:a)cout<<i<<' ';
    cout<<'\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}