#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a, count = 0, i=1; cin>>a;
        while(pow(i,6) <= a){
            count++; i++;
        }
        cout << floor(sqrt(a)) + floor(cbrt(a)) - count << "\n";
    }
}