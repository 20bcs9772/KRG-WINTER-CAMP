#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4,5,6,7,8};
    int n1 = sizeof(arr1)/sizeof(arr1[1]);
    int arr2[] = {4,7,9,10,11,12};
    int n2 = sizeof(arr2)/sizeof(arr2[1]);
    int arr3[] = {4,8,9,13,14,15};
    int n3 = sizeof(arr3)/sizeof(arr3[1]);

    map<int, int> hm;

    for (int i = 0; i < n1; i++)
    {
        if(hm.find(arr1[i]) == hm.end()){
            hm[arr1[i]]++;
        }
    }

    for (int i = 0; i < n2; i++)
    {
        auto s = hm.find(arr2[i]);
        if(s->second == 1){
            hm[arr2[i]]++;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        auto t = hm.find(arr3[i]);
        if(t->second == 2){
            hm[arr3[i]]++;
        }
    }

    for(auto x : hm){
        if(x.second == 3){
            cout<<x.first<<" ";
        }
    }

    cout<<endl;
    

    return 0;
}