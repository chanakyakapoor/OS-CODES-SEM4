#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int>& a,
         pair<char, int>& b)
{
    return a.second > b.second;
}
void sorte(map<char, int>& m)
{
  
    vector<pair<char, int> > A;
  
    for (auto& it : m) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);
  
    for (auto& it : A) {
  
        cout <<"\t"<< it.first << ' '
             << it.second << endl;
    }
}

int main()
{
    vector<char> t = {'A','A','A','B','B'};
    int n = 2;
    map<char, int> m;
    
    for(char c: t){
        m[c]++;
    }
  
    sorte(m);

    int maxe = prev(m.end(), 1)->second - 1;
    int idle = maxe * n;
    cout<<m.begin()->first<<"\t";
    cout<<prev(m.end(),1)->first<<"\t";
    cout<<maxe<<"\n";
        
    for(auto itr = next(m.begin(),1); itr != m.end() ; itr++){
        idle -= min(itr->second, maxe);
    }
    if(idle > 0) cout<<idle+t.size();
    else cout<<t.size();
    return 0;
}