package JAVA.ASSIGN_4;

import java.util.ArrayList;

public class a4q1 {
    private ArrayList<Integer> arr = new ArrayList<Integer>();
    private int size;
    private int curr;

    public a4q1(){
       
        curr=0;
    }

    public void push(int data){
        arr.add(data);
        curr++;
    }

    public void pop(){
        arr.remove(curr);
        curr--;
    }

    public Integer front(){
        return arr.get(curr);
    }
}
