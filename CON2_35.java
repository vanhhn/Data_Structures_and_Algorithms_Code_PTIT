import java.util.Scanner;

public class CON2_35 {
  static int n,k,s,ans;
  static int[] x=new int[100];
  public static void init(){
    x[0]=0;
    ans=0;
  }
  public static void TRY(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
      x[i]=j;
      if(i==k){
        int sum=0;
        for(int m=1;m<=k;m++){
          sum+=x[m];
        }
        if(sum==s){
          ans++;
        }
      }
      else{
        TRY(i+1);
      }
    }
  }
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    while(true){
      n=sc.nextInt();
      k=sc.nextInt();
      s=sc.nextInt();
      if(n+k+s==0){
        break;
      }
      init();
      TRY(1);
      System.out.println(ans);
    }
    sc.close();
  }
}
