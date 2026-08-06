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
    vector<int > v(n);
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        v[i]=a[i].first;
        a[i].second=i;
    }
    sort(rall(a));
    vector<int> pre;
    int l=a[0].second;
    pre.push_back(l);
    for(int i=1;i<n;i++){
        if(l>a[i].second){
            pre.push_back(l);
            l=a[i].second;
        }


    }
    reverse(all(pre));
    l=0;
    int cnt=1,ans=0;
    for(int i=0;i<pre.size();i++){
        if(v[pre[i]]==(l+1)){
            cnt++;
            l=v[pre[i]];
        }
        else if(v[pre[i]]==1){
            ans+=cnt;
            l=1;
            cnt=1;
        }
        
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