import java.util.*;
public class Ass3Q2 {

    static void print(int arr[], int n){
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]);
        }
        System.out.println();
    }

    static void leftrotation(int arr[], int n, int k){
        k= (-1)*k;
        int a;
        int count=0;

        while(count<k){
            a= arr[0];
            count++;
            for(int i=0; i<n-1; i++){
                arr[i]= arr[i+1];
            }
            arr[n-1]= a;
            print(arr,n);
        }
    }
    static void rightrotation(int arr[], int n, int k){
        int a;
        int count = 0;

        while(count < k){
            a = arr[n - 1];
            count++;
            
        
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = a;
        print(arr, n);
    }
   
}
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
        int n = arr.length;
        Scanner sc= new Scanner(System.in);
        int k= sc.nextInt();
        print(arr,n);
        if(k<0){
            
        leftrotation(arr,n,k);
        }else if(k>0){
        rightrotation(arr,n, k);
        }
       
    }
    

}
