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
    int n,i,steps=0; cin>>n;
    v a(n);
    r(i,n){
        cin>>a[i];
    }
    i=0;
    int idx=0, uimp=0;
    while(idx<n-1){

        idx=a[idx]+idx;
        steps++;

        if(a[idx] + idx+1 >= n-1){
            cout<<steps;
            return;
        }
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