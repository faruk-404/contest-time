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
    vector<int> a(5);
    for(auto &i:a)cin>>i;
    int cnt=0,cnt1=0;
    for(auto i:a){
        if(i>=60)cnt1++;
        if(i>=30)cnt++;
    }
    if(cnt1>=2 && cnt>=4)cout<<"Pass\n";
    else cout<<"Fail\n";

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}