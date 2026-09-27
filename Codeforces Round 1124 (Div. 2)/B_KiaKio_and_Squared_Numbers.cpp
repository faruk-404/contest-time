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
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    map<int,int> mp;
    auto cal=[&](int x){
        int sum=0;
        while(x>0){
            int d=x%10;
            sum+=(d*d);
            x/=10;
        }
        return sum;
    };
    for(int i=0;i<n;i++){
        int aa=-1,aaa=a[i];
        int ok=true;
        for(int c=1;c<=1000;c++){
            aaa=cal(aaa) ;     
            if(aa==aaa){
                ok=false;
                mp[aa]++;
                break;
            }
            aa=aaa;    
        }
        if(ok)mp[aaa]++;
    }

    // for(int i=0;i<n;i++){
    //     int aa=a[i];
    //     for(int c=1;c<1000;c++){
    //         aa=cal(aa);
    //     } 
    //     mp[aa]++;
    // }
    int ans=0;
    for(auto [x,y]:mp){
        ans+=((y*(y-1))/2);
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