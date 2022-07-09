//equal lenghts

#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,k,n,d) for(i=k;i<n;i+=d)
#define fe(i,k,n,d) for(i=k;i<=n;i+=d)
#define r(i,n) f(i,0,n,1)
#define re(i,n) fe(i,0,n,1)
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

    int a, b, n, num;
    v a1;
    v a2;
    cin>>n;
    int i=0, j=0, k=0;
    r(k,n){
        cin>>num;
        a1.push_back(num);
    }
    r(k,n){
        cin>>num;
        a2.push_back(num);
    }
    re(k,n){
        if(i==n){
            a=b;
            b=a2[0];
            break;
        }
        else if(j==n){
            a=b;
            b=a1[0];
            break;
        }
        if(a1[i]<a2[j]){
            a=b;
            b=a1[i];
            i++;
        }
        else{
            a=b;
            b=a2[j];
            j++;
        }
    }

    cout<<(a+b)/2;
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