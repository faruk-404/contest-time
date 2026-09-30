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
    int n,m,k;cin>>n>>m>>k;
    set<int> st;
    for(int i=1;i<=n;i++)st.insert(i);
    for(int i=0;i<m;i++){
        int x;cin>>x;
        st.erase(x);
    }
    for(auto i:st){
        if(k==0)break;
        k--;
        cout<<i<<" ";
    }
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