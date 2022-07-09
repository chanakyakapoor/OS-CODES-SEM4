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
    int n; cin>>n;
    unordered_map <char, int> m;
    int k=0,l=0;
    string s="1";

    while(k<n-1){
        string ns="";
        int idx=0;
        l=s.size();
        m[s[0]]++;
        for(int i=1;i<l;i++){
            if(s[i] != s[i-1]){
                ns+=to_string(m[s[i-1]])+(s[i-1]);
                idx=i;
                m.erase(s[i-1]);
                m[s[i]]++;
            }
            else{
                m[s[i]]++;
                idx=i;
            }
        }
        ns+=to_string(m[s[idx]])+(s[idx]);
        s=ns;
        m.clear();
        k++;
    }

    cout<<s<<"\n";
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