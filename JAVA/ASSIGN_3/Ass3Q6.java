public class Ass3Q6 {

    public static void insertArray(int arr1[], int arr2[], int c1, int c2, int key){
        for(int i=0; i<c1; i++){
            arr2[i]=arr1[i];
        }
        arr2[c1]=key;
    }
    public static void deleteArray(int arr1[], int c1, int index){
        for(int i=index; i<c1-1; i++){
            arr1[i] = arr1[i+1];
        }
        arr1[c1-1] = arr1[c1-1]-arr1[c1-1];
    }
    public static void main(String[] args) {
        int arr1[] = {10,20,30,40,50};
        int arr2[] = new int[10];
        int c1 = arr1.length;
        int c2 = arr2.length;
        int key = 60;
        int index = 3;

        // System.out.println(c1);

        
        insertArray(arr1, arr2, c1, c2, key);
        deleteArray(arr1, c1, index);

        for(int i=0; i<c1+1; i++){
            System.out.print(arr2[i]+" ");
        }
        System.out.println();
        for(int i=0; i<c1; i++){
            System.out.print(arr2[i]+" ");
        }
    }
    
}
