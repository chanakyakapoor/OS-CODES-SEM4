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

int chshuffle(string l1, string l2, int s1, int s2){

    int i = 0;
    unordered_map <char, int> m;
        r(i, s1){
        m[l1[i]]++;
    }

    r(i,s2) {
        if (m.find(l2[i]) == m.end()) {
            return false;
        }
        else {
            m[l2[i]]--;
            if (m[l2[i]] == 0) {
                m.erase(l2[i]);
            }
        }
    }
    return m.size() == 0;
}

void solve(){

    string l1="1x2y3z";
    string l2="3z2y1x";

    int s1 = l1.length();
    int s2 = l2.length();

    int i=0;

    if(chshuffle(l1, l2, s1, s2))  {
        cout<<"anagrams";
    }
    else cout<<"no";
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