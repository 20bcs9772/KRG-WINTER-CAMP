//  WAP to sorting string without using string Methods?.

import java.io.*;
import java.util.*;

public class a1q1{
    public static void sort_str(String str){
        char arr[] = str.toCharArray();
        for(int i=0;i<str.length()-1;i++){
            int k=0;
            for(int j=i+1;j<str.length()-k;j++){
                if(arr[j]<arr[i]){
                    char temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            k++;
        }

        for(int i=0;i<str.length();i++){
            System.out.print(arr[i]);
        }
        return ;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String str = sc.nextLine();
        sort_str(str);
    }
}