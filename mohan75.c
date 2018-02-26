#includeM<stdio.h>
import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class repl {
     public static void main(String aa[]){
        String b;
        Scanner s=new Scanner(System.in);
        b=s.next();
       int y= b.length();
       int u=y/2;
       char t[]=b.toCharArray();
       System.out.println(u);
       for(int i=0;i<b.length();i++){
         if(i==u){
             t[i]='*';
         }
     }
      for(int i=0;i<t.length;i++){
          System.out.print(t[i]);
      }
  
}
getch();
    }
