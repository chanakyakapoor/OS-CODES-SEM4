#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){       
        int n,g=0; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>g;
            v.at(i) = g;
        }
        sort(v.begin(), v.end());
        
        while(v.back() >= v.size() || v.size()>1){
            int maxe = v.back();
            sort(v.begin(), v.end());
            if(v.back() == v.size() && v.back() == maxe){
                v.pop_back();
            }
            else v.back() = floor(v.back() / 2);
        }
        if(v.size() == 0){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}