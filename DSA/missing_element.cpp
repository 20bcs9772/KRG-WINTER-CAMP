#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,4,7,13,16};
    int sum=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    int d =  arr[1]-arr[0] == arr[2]-arr[1] ? arr[1]-arr[0] : arr[4]-arr[3];

    // cout<<d<<endl;

    int Bsum = (n+1)*((2*arr[0])+(n*d))/2;
    
    cout<<Bsum-sum<<endl;
    
    return 0;
}