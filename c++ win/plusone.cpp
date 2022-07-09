#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,g=0; cin>>n;

       vector<int> a(n);   
       for(int i=0;i<n;i++){
           cin>>g;
           a.at(i) = g;
       }   
        
       cout<<(*max_element(a.begin(), a.end())) - (*min_element(a.begin(), a.end())) <<"\n";
     
    }
    return 0;
}
