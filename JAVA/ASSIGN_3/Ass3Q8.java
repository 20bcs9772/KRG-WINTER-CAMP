import java.util.*;
public class Ass3Q8 {
    public static void missingValue(int arr[]) {
        int n = arr.length;
        Arrays.sort(arr);
        for(int i=0; i<n-1; i++){
            if((arr[i+1]-arr[i]!=1)){
                System.out.println((arr[i]+1)+" is missing");
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 5, 4, 9, 7, 8 };
        missingValue(arr);
    }
}
