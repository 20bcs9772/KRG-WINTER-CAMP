#include<bits/stdc++.h>
using namespace std;

long long int longestSubarray(long long int *arr,long long int num){
    long long int max_sum = 0;
    long long int max_seq = 0;
    for(int i=0;i<num;i++){
        max_seq+=arr[i];
        if(max_sum<max_seq){
            max_sum = max_seq;
        }
        if(max_seq<0){
            max_seq=0;
        }
    }

    return max_sum;
}

int main(){
    long long int num = 0;
    cin>>num;
    long long int *arr = new long long int[num];

    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    cout<<longestSubarray(arr,num)<<endl;

    delete [] arr;

    return 0;
}

// implementation of kadane algo