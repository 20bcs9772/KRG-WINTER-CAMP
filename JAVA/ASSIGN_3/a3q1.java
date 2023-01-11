public class a3q1 {
    public static void main(String[] args) {
        int arr[] = {1,1,0,0,1};
        int count = 0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==0){
                count++;
            }
        }

        for(int i=0;i<arr.length;i++){
            if(i<count){
                System.out.print(0);
            } else {
                System.out.print(1);
            }
        }
        
        System.out.println("");
    }
}
