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
    vector<int>aa,bb;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(i&1)aa.push_back(x);
        else bb.push_back(x);
    }
    sort(all(aa));
    sort(all(bb));
    int l=0,r=0;
    
    if(aa[0]<bb[0])
    while(l<aa.size() && r<bb.size()){
        if(aa[l++]>bb[r++]){
            cn;
            return;
        }
    }else
    while(l<aa.size() && r<bb.size()){
        if(aa[l++]<bb[r++]){
            cn;
            return;
        }
    }
 cy;
        
    

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}