import java.util.*;
import java.io.*;

public class a3q2 {
    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5,6,7};
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        if(k>=0){

            while(k-- != 0){
                int last = arr[arr.length-1];
                for(int i=arr.length-1;i>0;i--){
                    arr[i] = arr[i-1];
                }
                arr[0] = last;
            }

        } else {

            while(k++ != 0){
                int first = arr[0];
                for(int i=0;i<arr.length-1;i++){
                    arr[i] = arr[i+1];
                }
                arr[arr.length-1] = first;
            }

        }

        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]);
        }

        System.out.println("");
    }
}
