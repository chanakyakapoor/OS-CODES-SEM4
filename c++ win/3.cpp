#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        bool f = 0;
        if(s.length()>1 && s.length() % 2 ==0){
            for(int i = 0, j = s.length()/2; i<s.length() / 2, j<s.length(); i++, j++){
                if(s[i] != s[j]){
                    f=1;
                    break;
                }
            }
            if(f==1) cout<<"NO\n";
            else cout<<"YES\n";
        }
        else cout<<"NO\n";
        
        
    }
    return 0;
}
