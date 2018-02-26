import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class odds{
     public static void main(String aa[]){
       int b;
      Scanner s=new Scanner(System.in);
      b=s.nextInt();
      int a[]=new int[b];
      for(int i=0;i<b;i++){
          a[i]=s.nextInt();
      }
      for(int i=0;i<a.length;i++){
          if(a[i]%2!=0){
              System.out.printf("%d ",a[i]);
          }
      }
}
getch();
    }
