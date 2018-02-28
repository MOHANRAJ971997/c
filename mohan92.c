import java.util.*;
public class summm{
      public static void main(String aa[]){
            int n;
            int a;
            int sum=0;
            Scanner s=new Scanner(System.in);
            a=s.nextInt();
            n=s.nextInt();
            int b[]=new int[n];
            for(int i=0;i<n;i++){
                b[i]=s.nextInt();
            }
            for(int i=0;i<=a;i++){
             sum=sum+b[i];
            }
             System.out.println(sum);
    }
    getch();
}
