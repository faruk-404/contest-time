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
    int l=0,r=n-1,mid;
    int ans=LLONG_MAX;
    int mm=LLONG_MAX;
    while(l<=r){
        mid=(l+r)/2;
        l=mid+1;
        if(l >= n) break;  
        vector<int> v=a;
        auto it=max_element(v.begin()+l,v.end());
        if(it!=v.end())v.erase(it);
        int an=0;
        int mx=a[0];
        for(auto i:v){
            if(mx<i)mx=i;
            else an+=mx-i;
        }
        ans=min(ans,an);
       
    }
    l=0,r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        r=mid-1;
        if(r < 0) break; 
        vector<int> v=a;
        if(r==0){
            int an=0;
            int mx=a[0];
            for(auto i:v){
               if(mx<i)mx=i;
               else an+=mx-i;
            }
            ans=min(ans,an);

        }
        
        auto it=max_element(v.begin(),v.begin()+r);
        if(it!=v.end())v.erase(it);
        int an=0;
        int mx=a[0];
        for(auto i:v){
            if(mx<i)mx=i;
            else an+=mx-i;
        }
        ans=min(ans,an);
       
    }
    
     l=0,r=n-1;
    // while(l<=r){
        mid=(l+r)/2;
        r=mid;
       // if(r < 0) break; 
        vector<int> v=a;
        // if(r==0){
        //     int an=0;
        //     int mx=a[0];
        //     for(auto i:v){
        //        if(mx<i)mx=i;
        //        else an+=mx-i;
        //     }
        //     ans=min(ans,an);

        // }
        
        auto it=max_element(v.begin(),v.begin()+r);
        if(it!=v.end())v.erase(it);
        int an=0;
        int mx=a[0];
        for(auto i:v){
            if(mx<i)mx=i;
            else an+=mx-i;
        }
        ans=min(ans,an);
       
    // }

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


