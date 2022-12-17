// find no. of elements greater than an elemnt in right direction

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7,12,6,4,13,5};
    int n = sizeof(arr)/sizeof(arr[1]);

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }

    return 0;
}