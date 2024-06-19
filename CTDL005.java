import java.util.Scanner;

public class CTDL005 {
    static Scanner sc = new Scanner(System.in);
    static int n;
    static boolean ok;
    static int[] a = new int[100];

    public static void swap(int[] array, int x, int y) {
        int temp = array[x];
        array[x] = array[y];
        array[y] = temp;
    }

    public static void reverse(int[] a, int l, int r) {
        while (l <= r) {
            swap(a, l, r);
            l++;
            r--;
        }
    }

    public static void init() {
        n = sc.nextInt();
        ok = true;
        for (int i = 1; i <= n; i++) {
            a[i] = i;
        }
    }

    public static void in() {
        for (int i = 1; i <= n; i++) {
            System.out.print(a[i]);
        }
        System.out.print(" ");
    }

    public static void next() {
        int i = n - 1;
        while (i > 0 && a[i] > a[i + 1]) {
            i--;
        }
        if (i <= 0) {
            ok = false;
        } else {
            int j = n;
            while (a[i] > a[j]) {
                j--;
            }
            swap(a, j, i);
            reverse(a, i + 1, n);
        }
    }

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            init();
            while (ok) {
                in();
                next();
            }
            System.out.println("");
        }
        sc.close();
    }
}