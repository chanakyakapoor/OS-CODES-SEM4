#include<bits/stdc++.h>
using namespace std;
int main(){

    // int n; cin>>n;
    // int k; cin>>k;
    int n = 3;
    int k = 29;
    string s(n, 'a');
    int i = 0 ,val = n;
    while(i<n && val < k){
        if(s[n-i-1] != 'z'){
            s[n-i-1] ++;
            val++;
            
        }
        else i++;
    }
    cout<<s<<"\t"<<val;



}