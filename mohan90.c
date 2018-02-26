import java.util.*;
import java.lang.*;
import java.util.ArrayList;
public class alph{
     public static void main(String aa[]){
        String s;
        Scanner ss=new Scanner(System.in);
        s=ss.next();
        char v[]=s.toCharArray();
        for(int i=0;i<v.length;i++){
            if(Character.isDigit(v[i])){
                System.out.print(v[i]);
            }
        }
    }
    getch();
    }
