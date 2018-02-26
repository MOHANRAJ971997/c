#incclude<stdio.h>
import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class vowel{
     public static void main(String aa[]){
         String a;
    Scanner s=new Scanner(System.in);
    a=s.next();
    int c=0;
   int l=a.length();
   char b[]=a.toCharArray();
   for(int i=0;i<l;i++){
     if((b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')||(b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')){
         c=1;
         break;
     }
   }
   if(c==1){
       System.out.println("yes");
   }
 else{
       System.out.println("no");
 }
}
    }
    getch();
    
