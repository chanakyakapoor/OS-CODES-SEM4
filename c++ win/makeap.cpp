#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c,m=0;
        cin>>a>>b>>c;  
        int f1 = (2*b - c);
        int f2 = (2*b - a);
        int f3 = (a + c)/(2);
        if((f1)%a==0 && (f1) > 0){
            printf("YES\n");
        }
        else if((f2)%c==0 && (f2) > 0){
            printf("YES\n");
        }
        else if((f3)%b==0 && (a+c)%2 == 0){
            printf("YES\n");
        }
        else printf("NO\n");   
    }
    return 0;
}
