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

    int n,k,num,i=0,ctr=0,spaces=0,j=0,idx=0,tmp=0,ltr=0; cin>>n>>k;
    v nums;
    r(i,n){
        cin>>num;
        nums.push_back(num);
    }
    for(int i=0;i<n-1;i++){
        for(int j=idx;j<n-1;j++){
            if((ctr+spaces)<(k-nums[idx])){
                idx=j;
                ctr+=nums[idx];
                spaces++;
                ltr++;
                cout<<spaces<<"\n";
            }
            else {
                idx++;
                if(ltr>0){
                    spaces=(k-ctr-ltr+1);
                }
                else{
                    spaces=k-ctr;
                }
                cout<<ctr<<" "<<spaces<<" "<<ltr<<"\n";
                ltr=0;
                ctr=0;
                tmp+=(spaces*spaces);
                // cout<<tmp<<"\n";
                spaces=0;
                break;
            }
            }
            cout<<"end\n";
        }
        cout<<"spaces "<<tmp<<"\n";
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