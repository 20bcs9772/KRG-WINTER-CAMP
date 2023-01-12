import java.util.*;
public class Ass3Q10 {

    public static void searchIndex(int arr[], int x){
        int n = arr.length;
        int flag = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                System.out.println("Index is "+i);
                flag = 1;
            }
        }
        if(flag==0){
            System.out.println("Element not found in the array");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[6];
        System.out.println("Enter 6 elements of array");
        for(int i = 0; i<6; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter no. whose index to find");
        int x = sc.nextInt();
        searchIndex(arr, x);
    }
}
