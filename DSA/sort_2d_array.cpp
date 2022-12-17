#include<bits/stdc++.h>
using namespace std;

void sort2d(char *arr[], int n){
    // arr[0] = arr[1];
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
}

int main(){
    char arr1[] = {'H','a','m','i','l','t','o','n'}; 
    char arr2[] = {'G','l','o','r','y'}; 
    char arr3[] = {'J','a','m','e','s','o','n'};
    char *arr[] = {arr1,arr2,arr3};
    int n = 3;

    sort2d(arr,20);

    return 0;
}