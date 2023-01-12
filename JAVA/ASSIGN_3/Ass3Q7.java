public class Ass3Q7 {
    public static void cyclicPermute(int arr[]) {
        int n = arr.length;
        for (int k = 0; k < n; k++) {

            int temp = arr[n - 1];
            for (int i = n - 1; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = temp;
            for (int j = 0; j < n; j++) {
                System.out.print(arr[j]);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4 };
        cyclicPermute(arr);
    }
}
