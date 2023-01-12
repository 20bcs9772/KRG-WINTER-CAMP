public class Ass3Q1 {
    public static void main(String[] args) {
        int arr[] = {1,0,0,1,0,0,1,1,1,0};
        int a=0;
        int b=0;
        for(int i=0; i<arr.length; i++){
            if(arr[i]==0){
                a++;
            }else{
                b++;
            }
        }
        for(int i=0; i<a; i++){
            arr[i]=0;
        }
        for(int i=a+1; i<b+a; i++){
            arr[i]=1;
        }
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]);
        }
    }
}
