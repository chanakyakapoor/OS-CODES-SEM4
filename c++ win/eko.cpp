#include<bits/stdc++.h>
using namespace std;

int checker(vector<int> a, int tree, int req, int mid, int countR){

    for(int i=mid;i<tree;i++){

        countR += (a[i] - a[mid]);
    }

    // cout<<countR;

    if(countR < req){
        checker(a, mid, req, (mid/2), countR);  
    }
 

    if(countR > req){
        checker(a, tree, req, (tree+mid)/2, countR);
    }


}

int main(){

    int tree, req, num;
    cout<<"ele";
    cin >> tree >> req;
    vector <int> a;

    for (int i = 0; i < tree; i++)
    {
        cin>>num;
        a.push_back(num);
    }

    sort(a.begin(), a.end());

    vector<int> v(1e9);
    iota(begin(v), end(v), 0);

    int countR = 0;

    checker(a, tree, req, tree/2, countR);

}