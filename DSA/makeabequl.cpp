//https://www.codechef.com/submit/MAKEABEQUAL

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    while(n--){
        long long int num;
        cin>>num;
        long long int *arr1 = new long long int [num];
        long long int *arr2 = new long long int [num];

        for(int i=0;i<num;i++){
            cin>>arr1[i];
        }
        
        for(int i=0;i<num;i++){
            cin>>arr2[i];
        }

        long long int diff1=0, diff2=0;

        for (int i = 0; i < num; i++)
        {
            if(arr1[i]>arr2[i]){
                diff2 += (arr1[i] - arr2[i]);
            }
            else{
                diff1 += (arr2[i] - arr1[i]);
            }
        }

        if(diff1==diff2){
            cout<<diff1<<endl;
        } else {
            cout<<-1<<endl;
        }
        

        delete [] arr1;
        delete [] arr2;

    }

    return 0;
}