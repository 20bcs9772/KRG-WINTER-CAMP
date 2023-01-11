#include <iostream>
using namespace std;

// void evenOdd(int *arr){
//     for(int i=0;i<5;i++){
//         if(*(arr+i)%2==0){
//             cout<<"Even "<<*(arr+i)<<endl;
//         } else {
//             cout<<"Odd "<<*(arr+i)<<endl;
//         }
//     }
// }

// int sum(int a){
//     if(a==0){
//         return 0;
//     }
//     return (a%10) + sum(a/10);
// }

void sep(int arr[],int n,int l,int r){
    if (l==r){
        return;
    }
    if(arr[l]<0){
        sep(arr,n,l+1,r);
    }
    else {
        if(arr[r]<0){
            int temp = arr[r];
            arr[r] = arr[l];
            arr[l] = temp;
            sep(arr,n,l+1,r-1);
        } else {
            sep(arr,n,l,r-1);
        }
    }
}

int main(){
    // int a=10;
    // int *b = &a;
    // (*b) ++;
    // cout<<a<<" "<<*b<<endl;
    // sum(a);
    // cout<<a<<endl;


    // int *arr = new int [5];
    // for(int i=0;i<5;i++){
    //     arr[i]= i+1;
    // }

    // evenOdd(arr);
    // cout<<sum(23412352)<<endl;

    // int *arr1 = new int [10];
    // for(int i=0;i<10;i++){
    //     arr1[i]=2*(i+2);
    // }
    // sort(arr1,arr1+10);
    // int k ;
    // cin>>k;
    // cout<<arr1[k]<<endl;

    int arr[6] = {9,-1,8,-4,10,-3};
    sep(arr,6,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }

    

    return 0;
}