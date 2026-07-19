#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=1e5;
vector<int> v[N];
vector<int > ans(100);


void ok(){
    for(int i=1;i*i<N;i++){
        for(int j=i+i;j<N;j+=i){
            v[j].push_back(i);
        }
    }
    set<int> st;
    for(int i=1;i<N;i++){
        if(!st.count(v[i].size())){
            st.insert((int)v[i].size());
            ans[(int)v[i].size()]=i;
        }
    }
}


void solve(){
    int n;cin>>n;
    for(auto i:v[ans[n]])cout<<i<<' ';
    
    nf;
    //for(auto x:st)cout<<x.first<<' '<<x.second<<nl;;
    // for(int i=1;i<100;i++){
    //     cout<<i<<" - "<<ans[i]<<nl;
    // }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ok();
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}