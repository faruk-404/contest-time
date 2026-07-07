#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=1e5+5;
vector<int> pre(N);
void ok(){
    for(int i=1;i<N;i++){
      string s=to_string(i);
       string s1;
       s1=s;
       reverse(all(s1));
        if(s==s1)pre[i]=pre[i-1]+i;
        else pre[i]=pre[i-1];
    }

}
void solve(){
    int l,r;cin>>l>>r;
    cout<<pre[r]-pre[l-1]<<nl;
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