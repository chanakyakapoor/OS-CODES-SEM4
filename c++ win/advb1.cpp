#include<bits/stdc++.h>
using namespace std;
const int num = 1e6;
int n;
long long m;
long long tree[num];
bool checker(int h){

    long long req = 0;

    for(int i=0;i<n;i++){
        if(tree[i] >= h){
            req+=(tree[i] - h);
        }
    }
    return req>= m;
}
int main(){
    
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>tree[i];
    }

    long long high = 1e9, low = 0, mid;

    while(high - low > 1){
        mid = ( high + low )/2;

        if(checker(mid)){
            low = mid;
        }
        else{
            high = mid - 1;

        }

    }

    if(checker(high)){
        cout<<high;
    }
    else{
        cout<<low;
    }

    return 0;
}