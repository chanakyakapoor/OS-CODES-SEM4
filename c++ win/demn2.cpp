// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l, r, k;
//         cin >> l >> r >> k;
//         long long diff = r - l;

//         if (diff == 0 && l == 1)
//         {
//             cout << "NO" << endl;
//         }
//         else if (diff == 0 && l > 1)
//         {
//             cout << "YES" << endl;
//         }

//         else
//         {
//             long long int g = r - l + 1;
//             long long int p = (r / 2) - ceil((float)l / 2) + 1;
//             if (k >= g - p)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
//         return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v = {0,0,1,1,1,2,2,3,3,4};
//     int k=1;
//     if(v.size()>1){
//         auto p1 = v.begin(), p2=v.begin();
//         p2++;
//         for(int i=1;i<v.size()-1;i++){
//             if(*p1 == *p2){
//                 *p2 = v.at(i+1);
//             }
//             else{
//                 *p1 = v.at(i);
//                 *p2 = v.at(i+1);
//                 k++;
//             }
//         }
//     }
//     else {
//         cout<<"1";
//     }
//     if(v.end()!=v.end()-1){cout<<k+1;}
//     else cout<<k;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string str = "hello";
//     vector<char> s(str.begin(), str.end());
    
//     // auto p1 = s.begin(), p2 = s.end()-1;
//     // cout<<*p1<<*p2<<"\n";
    
//     int i=0,j=s.size()-1;
//     while(j>i){
//         swap(s[i], s[j]);
//         i++;j--;
//     }
//     for(auto s:s){
//         cout<<s;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> n = {1, 2, 3, 5, 7, 6, 4};
    vector<int> n = {1, 3, 2};
    int l = n.size()-1;
    int idx=0;
    int i;
    for(i=l-1;i>=0;i--){
        if(n[i]<n[i+1]){
            idx=i;
            break;
        }
    }
    cout<<idx<<"\n";
    if(i<0) reverse(n.begin(), n.end());
    else {
        for(int i=l;i>=0;i--){
            if(n[i]>n[idx]){
                swap(n[i], n[idx]);
                break;
            }
        }
    }
    reverse(n.begin()+idx+1, n.end());
    for(auto x:n){
        cout<<x<<"\t";
    }
}