import java.util.Scanner;

public class CTDL004 {
  static Scanner sc = new Scanner(System.in);
  static int n;
  static int[] a = new int[100];
  static boolean ok;
  public static void init() {
    n = sc.nextInt();
    for (int i = 0; i < 100; i++) {
      a[i] = 0;
    }
    ok=true;
  }
  public static void in(){
    for(int i=1;i<=n;i++){
      if(a[i]==0){
        System.out.print("A");
      }
      else{
        System.out.print("B");
      }
    }
    System.out.print(" ");
  }
  public static void sinh(){
    int i=n;
    while(i>0&&a[i]==1){
      a[i]=0;
      i--;
    }
    if(i<=0){
      ok=false;
    }
    else{
      a[i]=1;
    }
  }
  public static void main(String[] args) {

    int t = sc.nextInt();
    while (t-- > 0) {
        init();
        while(ok){
          in();
          sinh();
        }
        System.out.println("");
    }
    sc.close();
  }
}