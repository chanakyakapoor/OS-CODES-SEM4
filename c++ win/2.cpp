#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, n1, n2, n3;
        vector<int> l, r, c;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>n1>>n2>>n3;
            l.push_back(n1);
            r.push_back(n2);
            c.push_back(n3);
        }
        int max=r[0], min=l[0], madx=0, midx=0, cost=0;
        bool f=false;
        for(int i=1;i<n;i++){
            f=false;
            if(l[i] < l[i-1]){
                min=l[i];
                midx=i;
                f=true;
            }
            if(r[i] > r[i-1]){
                max=r[i];
                madx=i;
                f=true;
            }

            // for(int j=midx;j<=madx;j++){
            //     cost+=c[j];
            // }
            if(f==false){
                cost=c[midx]+c[madx];
                cout<<" cost "<< cost;
            }
        }
}
}