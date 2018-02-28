import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class sumn{
    public static void main(String aa[]){
    String a;
    int d;
    Scanner s=new Scanner(System.in);
    d=s.nextInt();
    a=String.valueOf(d);
    char v[]=a.toCharArray();
    int sum=1;
    for(int i=0;i<v.length;i++){
        int y=Character.getNumericValue(v[i]);
        sum=sum*y;
    }
    System.out.println(sum);
   
   
           
   }
   getch();
}
