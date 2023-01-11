#include<bits/stdc++.h>
using namespace std;

int predict(int z, int k, char c='p'){
    if(z+k>8) return z-k;
    else if(z-k<1) return z+k;
    else if(c=='m') return z-k;
    else return z+k;
}

int main(){
    long long int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        int arr[9][9] = {0};

        arr[x][y] = 1;

        // corner case
        if((x==1 || x==8) && (y==1 || y==8)) arr[predict(x,2)][predict(y,1)] = 2;

        // edges 
        if (x==1 || x==8) {
            arr[predict(x,2)][predict(y,1)] = 2;
            arr[predict(x,2)][predict(y,1,'m')] = 2;
        } else if (y==1 || y==8){
            arr[predict(x,1)][predict(y,2)] = 2;
            arr[predict(x,1,'m')][predict(y,2)] = 2;
        } else {
        // inside
        if(x<5 && y<5){
            arr[x+3][y-1] = 2;
            arr[x-1][y+2] = 2;
        } else if(x>4 && y<5){
            arr[x-3][y-1] = 2;
            arr[x+1][y+2] = 2;
        } else if(x>4 && y>4){
            arr[x-3][y+1] = 2;
            arr[x+1][y-2] = 2;
        } else {
            arr[x+3][y+1] = 2;
            arr[x-1][y-2] = 2;
        }
        }

        for(int i=1;i<9;i++){
            for(int j=1;j<9;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}