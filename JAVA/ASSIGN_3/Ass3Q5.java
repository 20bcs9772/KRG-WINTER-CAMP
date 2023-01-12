public class Ass3Q5 {

    public static void minDist(int arr[], int n) {

        int ind[] = new int[n];
        for (int j = 0; j < n; j++) {
            int temp = Integer.MAX_VALUE;
            for (int i = 0; i < n; i++) {
                if (j == i) {
                    continue;
                }
                int val = Math.abs(arr[i]-arr[j]);

                if (val < temp) {
                    temp = val;
                }
            }
            ind[j] = temp;
            temp = 1000;
        }
        for(int i=0; i<n; i++){
        System.out.print(ind[i]);
        }
    }

    public static void main(String[] args) {
        int arr[] = { 2, 5, 1, 9 };
        int n = arr.length;
        minDist(arr, n);
    }

}
