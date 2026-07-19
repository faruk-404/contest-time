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
   if(n&1){cn;return;}
    int sum=0;
    for(auto i:a)sum+=i;
    if(sum==0){
        cy;
        return;
    }
    int kk=sum;
     if(sum<0) kk=-sum;
    if((kk%4)==0){cy;return;}
    cn;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}