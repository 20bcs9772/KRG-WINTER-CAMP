import java.util.*;

public class Ass3Q8b {
    public static void missingValue(int arr[]) {
        int n = arr.length;
        Arrays.sort(arr);
        int i = 0;
        int j = 0;
        int k = 0;
        int d = 0;
        int an = 0;
        while (i < n - 3) {
            if ((arr[i + 1] - arr[i]) == (arr[i + 2] - arr[i + 1])
                    && (arr[i + 2] - arr[i + 1]) == (arr[i + 3] - arr[i + 2])) {
                d = arr[i + 1] - arr[i];
                break;
            } else {
                i++;
            }
        }
        System.out.println("Diff is " + d);
        while (an <= arr[n - 1]) {
            an = arr[0] + (j * d);
            if (an != arr[k]) {
                System.out.println(an + " is missing");
                j++;
            } else {
                j++;
                k++;
            }
        }
        while (an <= arr[n - 1]) {
            an = arr[0] + (j * d);
            if (an != arr[k]) {
                System.out.println(an + " is missing");
                j++;
            } else {
                j++;
                k++;
            }
        }

    }

    public static void main(String[] args) {
        int arr[] = { 2, 4, 6, 8, 10, 14, 18, 26 };
        try {
            missingValue(arr);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array index out of bound Handled");
        }

    }
}
