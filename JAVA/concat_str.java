import java.io.*;
import java.util.*;

public class concat_str {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        String str1 = sc.nextLine();
        // String str2 = sc.nextLine();
        // String str3 = str1.concat(str2);

        // for(int i=0;i<str3.length();i++){
        //     System.out.println(str3.charAt(i));
        // }

        // System.out.println(str1.compareTo(str2));
        // System.out.println(str1==str2);
        // System.out.println(str1.equals(str2));

        String strArr[] = str1.split(" ");

        // reverse a sentence
        for(int i=strArr.length-1;i>=0;i--){
            System.out.print(strArr[i]+" ");
        }
        System.out.println("");

        // remove whitespace
        String str4 = "";
        for(int i=0;i<strArr.length;i++){
            str4 += strArr[i];
        }
        System.out.println(str4);

        // using replace
        System.out.println(str1.replaceAll(" ", ""));

        TreeMap<Character,Integer> hm = new TreeMap<>();
        for(int i=0;i<str1.length();i++){
            if(hm.containsKey(str1.charAt(i))){
                hm.put(str1.charAt(i),hm.get(str1.charAt(i))+1);
            } else {
                hm.put(str1.charAt(i),1);
            }
        }

        Set<Map.Entry<Character, Integer> > entries = hm.entrySet();

        for (Map.Entry<Character, Integer> entry : entries){
            for(int i=0;i<entry.getValue();i++){
                System.out.print(entry.getKey());
            }
        }

        System.out.println("");
    }
}
