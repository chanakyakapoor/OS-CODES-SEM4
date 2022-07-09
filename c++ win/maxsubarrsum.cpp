//KADANE's ALGO

#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,k,n,d) for(i=k;i<n;i+=d)
#define r(i,n) f(i,0,n,1)
#define fr(i,k,n,d) for(i=k;i>=n;i+=d)
#define INF (int)1e9
#define sc scanf
#define pf printf
#define scd(t) scanf("%d",&t)
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define v vector<int> 
#define pb push_back
typedef long long ll;

void flag(bool ex){
    if(ex) pf("YES");
    else pf("NO");
}

void solve(){
    int n,i=0; cin>>n;
    v a(n);
    r(i,n){
        cin>>a[i];
    }
    // int currsum=0, maxsum=0, start=0,end=0,s=0;
    // r(i,n){
    //     currsum += a[i];
    //     if(maxsum < currsum){
    //         maxsum = currsum;
    //         start=s;
    //         end=i;
    //     }

    //     if(currsum<0){
    //         currsum=0;
    //         s=i+1;
    //     }
    // }
    // pf("%d,%d,%d",maxsum,start,end);
    int c=0,mul=1;
    v idx;
    r(i,n){
        if(a[i]<0) {
            idx.push_back(i);
            c++;
        }
    }
    // cout<<c<<idx.size();
    // for( auto x : idx){
    //     cout<<x;
    // }

    // cout<<idx.back();

    if(c%2==0){
        r(i,n){
            mul*=a[i];
        }
        cout<<mul;
    }
    else 
        {
            f(i,0,idx.back()-1,1){
                mul*=a[i];
            }
            cout<<mul;
        }
}

int main(){
    FASTIO;
    int t; scd(t);
    while(t){
        solve();
        t--;
    }
return 0;
}