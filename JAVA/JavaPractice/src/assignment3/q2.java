package assignment3;

public class q2 {

    public static void main(String[] args) {
        int a[] = {1, 2, 3, 4, 5, 6};
        int n = 6;
        int k = 2;

        int i = 0, j = n - 1;

        reverse(a, i, j);

        i = 0;
        j = k - 1;

        reverse(a, i, j);

        i = k;
        j = n - 1;

        reverse(a, i, j);


        for (i = 0; i < n; i++) {
            System.out.println(a[i]);
        }
    }

    private static void reverse(int a[], int i, int j) {
        while (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
}