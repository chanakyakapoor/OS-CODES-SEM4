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
const int num = 1e6+5;
long long n;

int arr[num];

void flag(bool ex){
    if(ex) pf("YES");
    else pf("NO");
}

void solve(){
    int i=0;
    cin>>n;
    r(i, n){
        cin>>arr[i];
    }

    int left[n],right[n];

    left[0] = arr[0];
    right[n-1] = arr[n-1];

    f(i,1,n,1){
        left[i] = max(left[i-1], arr[i]);
    }
    fr(i,n-2,0,-1){
        right[i] = max(right[i+1], arr[i]);
    }

    int cap = 0;

    f(i,1,n,1){
        if(min(right[i+1], left[i-1]) > arr[i]){
            cap+=min(right[i], left[i]) - arr[i];
        }
    }

    cout<<"answer "<<cap<<"\n";

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