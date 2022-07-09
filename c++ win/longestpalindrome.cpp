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

    string s="bbcaacaacbbaa";
    int m[s.length()][s.length()];
    int i=0,j=0,mxlni=0,mxlnj=0;
    r(i,s.length()){
        r(j,s.length()){
            if(i==j){
                m[i][j] = 1;
            }
            else m[i][j] = 0;
        }
    }
    int maxlen=0,start=0;

    f(i,0,s.length()-1,1){
        if(s[i] == s[i+1]){
            m[i][i+1] = 1;
            start=i;
            maxlen=2;
        }
    }
    int k;
    fe(k,3,s.length(),1){
        f(i,0,s.length()-k+1,1){
            int j = i+k-1;
            if((s[i] == s[j]) && m[i+1][j-1] == 1){
                m[i][j] = 1;
                if(k>maxlen){
                    start=i;
                    maxlen=k;
                }
            }
        }
    } 
    

    r(i,s.length()){
        r(j,s.length()){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=start;i<=start+maxlen-1;i++){
        cout<<s[i];
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