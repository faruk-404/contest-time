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
    int ze=count(a.begin(),a.end(),0);
    if(ze==0){
        cy;
        for(int i=0;i<n;i++)cout<<'A';
        cout<<'\n';
        return;
    }
    if(ze==1){
        cout<<"NO\n";
        return;
    }
    int ok=true;
    cy;
    for(int i=0;i<n;i++){
        if(ok && a[i]==0){cout<<'A';ok=false;}
        else if(a[i]==0)cout<<'B';
        else cout<<'C';
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