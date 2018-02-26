
import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class iso{
     public static void main(String aa[]){
         String v,l;
       Scanner s=new Scanner(System.in);
       v=s.next();
       l=s.next();
       int x=0;
       int y=0;
       char a[]=v.toCharArray();
       char b[]=l.toCharArray();
       ArrayList<Character>d=new ArrayList<Character>();
       ArrayList<Character>d1=new ArrayList<Character>();
       for(int i=0;i<a.length;i++){
          d.add(a[i]);
       }
       for(int i=0;i<b.length;i++){
          d1.add(b[i]);
       }
       for(int i=0;i<a.length;i++){
          int u= Collections.frequency(d, d.get(i));
          if(u>1){
              x=1;
              break;
          }

       }
       for(int i=0;i<b.length;i++){
          int u= Collections.frequency(d1, d1.get(i));
          if(u>1){
              y=1;
              break;
          }
       }
       if(x==0){
          System.out.println("Yes");
       }
 else{
         System.out.println("No");
 }
       if(y==0){
          System.out.println("Yes"); 
       }
 else{
         System.out.println("No");
 }


    }
    getch();
    
    }
