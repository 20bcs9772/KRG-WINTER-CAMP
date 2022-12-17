// implement string methods using pointers like length, reverse, concat, etc

#include<bits/stdc++.h>
using namespace std;

int str_len(const char *arr){
    int ans = 0, i=0;
    while(*(arr+i)!='\0'){
        ans++;
        i++;
    }
    return ans;
}

string str_concat(const char *arr1, const char *arr2){
    string ans = "";
    int i1 = 0, i2=0;

    while(*(arr1+i1)!='\0'){
        ans+=*(arr1+i1);
        i1++;
    }
    while(*(arr2+i2)!='\0'){
        ans+=*(arr2+i2);
        i2++;
    }

    return ans;
}

string str_nconcat(const char *arr1, const char *arr2, int n){
    string ans = "";
    int i1 = 0, i2=0;

    while((*(arr1+i1)!='\0') && i1<n){
        ans+=*(arr1+i1);
        i1++;
    }
    while((*(arr2+i2)!='\0') && i2<n){
        ans+=*(arr2+i2);
        i2++;
    }

    return ans;
}

string str_rev(const char *arr){
    int n = str_len(arr);
    int l=0,r=n-1;
    char ans[n];
    while((arr+l)<=(arr+r)){
        char temp = *(arr+l);
        ans[l] = *(arr+r);
        ans[r] = temp;
        l++;
        r--;
    }

    return string(ans);
}

bool str_comp(const char *arr1, const char *arr2){
    int i=0;

    if(str_len(arr1)!=str_len(arr2)){
        return false;
    }

    while((*(arr1+i)!='\0') || (*(arr2+i)!='\0')){
        if(*(arr1+i)!=*(arr2+i)){
            return false;
        }

        i++;
    }

    return true;
}

bool str_ncomp(const char *arr1, const char *arr2, int n){
    int i=0;

    while(((*(arr1+i)!='\0') || (*(arr2+i)!='\0')) && i<n){
        if(*(arr1+i)!=*(arr2+i)){
            return false;
        }

        i++;
    }

    return true;
}

string str_cpy(const char *arr){
    string ans = "";
    int i=0;
    while(*(arr+i)!='\0') ans+=*(arr+i);

    return ans;
}

string str_ncpy(const char *arr, int n){
    string ans = "";
    int i=0;
    while((*(arr+i)!='\0') && i<n) ans+=*(arr+i);

    return ans;
}

string str_sort(const char *arr){
    char arrt[str_len(arr)];

    for(int i=0;i<str_len(arr);i++){
        arrt[i] = arr[i];
    }

    // cout<<string(arrt)<<" "<<string(arr)<<endl;
    
    for(int i=0;i<str_len(arr)-1;i++){
        for(int j=i+1;j<str_len(arr);j++){
            if(arrt[i]>arrt[j]){
                char temp = arrt[i];
                arrt[i] = arrt[j];
                arrt[j] = temp;
            }
        }
    }

    return string(arrt);
}

int main(){
    string str1 = "alicein";
    const char *arr1 = str1.c_str();
    string str2 = "alicEin";
    const char *arr2 = str2.c_str();
    cout<<"Lenght "<<str_len(arr2)<<endl;
    cout<<"Concatenated str "<<str_concat(arr1,arr2)<<endl;
    cout<<"N-Concatenated str "<<str_nconcat(arr1,arr2,3)<<endl;
    cout<<"Reverse str "<<str_rev(arr1)<<endl;
    cout<<"Comapre str "<<str_comp(arr1,arr2)<<endl;
    cout<<"N-Comapre str "<<str_ncomp(arr1,arr2,4)<<endl;
    cout<<"Sort str "<<str_sort(arr1)<<endl;

    return 0;
}