#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> m;
    int t=150;
    m = {{1,3,5,7,9},{10,11,16,20,22},{23,30,34,60,70},{80,83,85,87,89},{91,93,95,97,98},{100,102,103,105,107}};
    // m = {{1,3,4},{6,7,8},{11,13,15},{17,18,19},{20,21,23},{25,26,28}};
    bool f = true;
    // cout<<m.size();
        int p1 = m[0][0];
        int p2 = m[0][m[0].size()-1];
        int i=0,j=0,k=0,l=m[0].size()-1;
        while(f){
            if(i>=m.size() || k>=m.size()){cout<<"false"; break;}
            if(t==p1) {cout<<"true"; break;}
            else if(t==p2) {cout<<"true"; break;}
            else if(t>p1 && t<p2){
                ++j; --l;
                p1 = m[i][j];
                p2 = m[k][l];
                if(p1>p2) {cout<<"false"; break;}
                cout<<"1\t"<<p1<<"\t"<<p2<<"\t"<<i<<"\t"<<k<<"\n";
                
            }
            else if(t>p1 && t>p2 && i<m.size()){
                ++i; ++k;
                if(i>=m.size() || k>=m.size()) {cout<<"false"; break;}
                p1 = m[i][j];
                p2 = m[k][l];
                cout<<"2\t"<<p1<<"\t"<<p2<<"\t"<<i<<"\t"<<k<<"\n";
                
            }
            else {cout<<"false"; break;}
        }
}