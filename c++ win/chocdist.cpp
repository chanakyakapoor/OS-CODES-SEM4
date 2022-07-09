#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    vector<long long> a;
    int num;

    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }

    sort(a.begin(), a.end());

    long long diff=a[m-1]-a[0];
    
    for(int i=1;i<(n-m+1);i++){
        diff = min(a[i+m-1] - a[i], diff);    
    }
    
    cout<<diff; 

}