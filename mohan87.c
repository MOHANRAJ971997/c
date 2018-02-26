import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class gcd{
     public static void main(String aa[]){
        int a,b;
        int c=0;
        Scanner s=new Scanner(System.in);
        a=s.nextInt();
        b=s.nextInt();
        for(int i=1;i<=a&&i<=b;i++){
            if(a%i==0&&b%i==0){
               c=i;
            }
        }
        System.out.println(c);
       
    }
    getch();
}
