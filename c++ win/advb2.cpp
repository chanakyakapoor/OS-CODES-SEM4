#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;

int cows;
long long n;

int arr[N];

bool checker(int l){

    int lastPos = -1;
    int cowl = cows;
    
    for(int i=0;i<n;i++){
        if(arr[i] - lastPos >= l || lastPos == -1){
            cowl --;
            lastPos = arr[i];
        }
        if (cowl == 0) break;
    }
    return cowl == 0;
}

//TTTTTFFFF
int main(){

    cin>>n>>cows;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    long long high = 1e9, low = 0, mid;

    while(high - low > 1){

        mid = (high + low)/2;
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
}