#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,k,n,d) for(i=k;i<n;i+=d)
#define fe(i,k,n,d) for(i=k;i<=n;i+=d)
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

    string s = "aabb";
    int n = s.length();
    cout<<n<<"\n";
    int m[n+1][n+1];
    int i,j;
    fe(i,0,n,1){
        fe(j,0,n,1){
            m[i][j] = 0;
      }
    }
    fe(i,1,n,1){
        fe(j,1,n,1){
            if((s[i-1] == s[j-1]) && i!=j){
                m[i][j] = 1 + m[i-1][j-1];
            }
            else m[i][j] = max(m[i-1][j], m[i][j-1]);
        }
    }

    fe(i,0,n,1){
        fe(j,0,n,1){
            cout<<m[i][j]<<" ";
      }
      cout<<"\n";
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