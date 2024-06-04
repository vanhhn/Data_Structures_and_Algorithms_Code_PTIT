import java.util.Scanner;
import java.util.Arrays; 
public class CON3_03{
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
      long ans=0;
      for(int i=0;i<a.length;i++){
        ans+=i*a[i];
      }
      System.out.println(ans);
      t=t-1;
    }
    sc.close();
  }
}