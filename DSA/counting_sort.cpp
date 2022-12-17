#include<bits/stdc++.h>
using namespace std;

void counting_sort(int arr[] , int n, int l, int u){
    int count[u-l+1] = {0};
    for(int i=0;i<n;i++){
        count[arr[i]-l]++;
    }

    for(int i=0;i<u-l+1;i++){
        for(int j=0;j<count[i];j++){
            cout<<i+l;
        }
    }

    cout<<endl;
    return;
}

int main(){
    int arr[] = {3,5,2,4,5,3,3,2,3,3,2,1,1,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    counting_sort(arr,n,*min_element(arr,arr+n),*max_element(arr,arr+n));

    return 0;
}