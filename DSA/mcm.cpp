// matrix chain multiplication


#include<iostream>
#include<limits.h>
 
using namespace std;
 

int matrixrecurssion( int p[], int i, int j){
    if(i==j){
        return 0;
    }
    int min_c= INT_MAX;
    for(int k=i; k<j; k++) {
        int cost = matrixrecurssion(p, i, k) + matrixrecurssion(p, k+1, j) + p[i-1]*p[k]*p[j];
        if(min_c > cost) min_c = cost;
    }
    return min_c;
}
 
int main()
{
    int n,i;
    cout<<"Enter number of matrices\n";
    cin>>n;
 
    n++;
 
    int arr[n];
 
    cout<<"Enter dimensions \n";
 
    for(i=0;i<n;i++)
    {
        cout<<"Enter d"<<i<<" :: ";
        cin>>arr[i];
    }
 
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< endl << "Using recursion " << matrixrecurssion(arr, 1 , n-1);
    return 0;
}