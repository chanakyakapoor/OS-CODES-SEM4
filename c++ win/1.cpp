#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin>>t;

    while(t--){
        int ctr=0;
        cin>>n>>k;
        if (n==1){
            cout<<"R\n";
        }
        
        else{
            if((n/2 >= k && n%2 ==0) || (n/2 + 1 >= k && n%2 !=0)){  
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=n;j++){
                        if(i%2 != 0 && i==j && ctr!=k){
                            cout<<"R";
                            ctr+=1;
                        }
                        else cout<<".";
                }
                    cout<<endl;
                }   
            }
            else cout<<"-1"<<endl;
        }   
    } 
return 0;
}