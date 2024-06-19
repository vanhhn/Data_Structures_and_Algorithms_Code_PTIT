import java.util.Scanner;

public class CON1_01 {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    sc.nextLine();
    while(t-->0){
      String s=sc.nextLine();
      int l=s.length();
      int[] a=new int[l];
      for(int i=0;i<l;i++){
        a[i]=(int)(s.charAt(i)-'0');
      }
      int id=l-1;
      while(id>=0&&a[id]==1){
        a[id]=0;
        id--;
      }
      if(id>=0){
        a[id]=1;
      }
      for(int i=0;i<l;i++){
        System.out.print(a[i]);
      }
      System.out.println();   
    }
    sc.close();
  }
}