public class Ass3Q9 {
    public static void leader(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            int flag = 1;
            for (int j = i; j < n; j++) {
                if (arr[i] < arr[j]) {
                    flag = 0;
                    break;
                } else {
                    continue;
                }
            }
            if (flag == 1) {
                System.out.println(arr[i]);
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = { 5, 43, 6, 12, 4, 7, 3, 2 };
        leader(arr);
    }
}
