import java.util.Scanner;
import java.util.Arrays;
public class CON3_04 {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(t>0){
      int n=sc.nextInt();
      int[] a=new int[n];
      for(int i=0;i<n;i++){
        a[i]=sc.nextInt();
      }
      Arrays.sort(a);
      long a1=0,a2=0;
      for(int i=0;i<n;i+=2){
        a1=a1*10+a[i];
      }
      for(int i=1;i<n;i+=2){
        a2=a2*10+a[i];
      }
      System.out.println(a1+a2);
      t=t-1;
    }
    sc.close();
  }
}
