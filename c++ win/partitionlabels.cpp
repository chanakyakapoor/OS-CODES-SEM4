#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "ababcbacadefegdehijhklij";
    int pos = 0;

    vector<int> a;
    map<char, vector<int>> m ;
    // m = {{'a', {1,2}}, {'b', {3,4}}};

    for(int i=0;i<s.length();i++){
        auto itr = m.find(s[i]);
        if(itr != m.end()){
            itr->second.push_back(i);
        }
        else m[s[i]] = vector<int> (1,i);
        
    }
    int maxe = 0, smaxe = 0, pmaxe = 0;
    auto ptr = m.begin();
    maxe = *max_element(ptr->second.begin(), ptr->second.end());
    cout<<maxe;
    for(auto itr=++m.begin();itr!=m.end();itr++){
        if(*min_element(itr->second.begin(), itr->second.end()) < maxe){
            smaxe = *max_element(itr->second.begin(), itr->second.end());
            if(smaxe > maxe){
                maxe = smaxe;
            }
        }
        else maxe = pmaxe;
    }

    // for(auto itr=m.begin();itr!=m.end();itr++){
    //     cout<<itr->first<<"\t";
    //     for(auto x: itr->second){
    //         cout<<x<<"\t"; 
    //     }
    //     cout<<"\n";
    // }

    // for(auto x: m.begin()->second){
    //     cout<<x<<"\t";
    // }

    


}