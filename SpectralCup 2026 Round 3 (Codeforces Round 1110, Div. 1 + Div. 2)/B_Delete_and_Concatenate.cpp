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
    int n,c;cin>>n>>c;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    vector<int> v=a;
    sort(all(v));
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(i&1)a[i]=v[l++];
        else a[i]=v[r--];
    }
   // for(auto i:a)cout<<i<<' ';nf;
    vector<int> dif(n);
    for(int i=0;i<n;i++){
        dif[i]=a[i]-c;
    }

    int ans=0,k=0;
    for(int i=0;i<n;i++){
        if(i<n-1 &&(dif[i]<0 || dif[i+1]<0)){
            ans+=max(dif[i],dif[i+1]);
            i++;
        }
        else{
            ans+=dif[i];
        }
        k=i;
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