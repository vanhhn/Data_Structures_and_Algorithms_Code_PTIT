import java.util.Scanner;

public class CON3_1 {
  public static void main(String[] args) {
    int[] a={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(t-->0){
       int s=sc.nextInt();
       int ans=0;
       for(int i=9;i>=0;i--){
        ans+=s/a[i];
        s%=a[i];
       }
       System.out.println(ans);
    }
    sc.close();
  }
}
