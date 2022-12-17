#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[],int l, int m, int r){
    // int nl = sizeof(l)/sizeof(l[0]);
    // int nr = sizeof(r)/sizeof(r[0]);

    int n1= m-l+1;
    int n2= r-m;

    int LA[n1];
    int RA[n2];

    for(int i=0; i<n1; i++){
                LA[i]= arr[i+l];
                
    }
    for(int j=0; j<n2; j++){
                RA[j]= arr[m+1+j];

    }
        int i=0, j=0, k=l;

    while((i<n1) && (j<n2)){
        if(LA[i]<=RA[j]){
            arr[k]= LA[i];
            i++;
        }
         else if(LA[i]>=RA[j]){
        arr[k]= RA[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = LA[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = RA[j];
        j++;
        k++;
    }
    
}

void mergeSort ( int arr[], int l,int r){
    if(l<r){
    int mid = (r+l)/2;
    // int l[mid] = {0};
    // int r[n-mid] = {0};

    // for(int i=0;i<n;i++){
    //     if(i<mid){
    //         l[i] = arr[i];
    //     } else {
    //         r[i-mid] = arr[i];
    //     }
    // }

    // print_arr(l);
    // print_arr(r);
    // cout<<"before***"<<endl;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    // print_arr(l);
    // print_arr(r);
    // cout<<"**after"<<endl; 
    merge(arr,l,mid,r);
    }
}
// 1 2 3 4 5 6 7
int main(){
    int arr[] = {3,6,2,9,1,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_arr(arr,n);
    mergeSort(arr,0,n-1);
    print_arr(arr, n);

    cout<<endl;

    return 0;
}