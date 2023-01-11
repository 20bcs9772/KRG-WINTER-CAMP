#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    int *arr = new int [8];
    for(int i=0;i<8;i++){
        arr[i]=i+1;
    }
    int sum=0;
    for(int i=0;i<8;i++){
        sum+=arr[i];
    }

    cout<<sum<<endl;

    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum1=0;
    int sum2=0;
    for(int i=0;i<3;i++){
        for( int j=0;j<3;j++ ){
            if(i==j){
                sum1+=arr2[i][j];
            }
            if(i+j==2){
                sum2+=arr2[i][j];
            }
        }
    }
    cout<< sum1-sum2<<endl;
    delete [] arr;
}