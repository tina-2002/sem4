import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.StringBuffer;
public class bufferdemo {
    public static void main(String[] args){
        StringBuffer sb =new StringBuffer("Rashmi");
        System.out.println(sb.capacity()); //[(oldcapacity*2)+2]
        System.out.println(sb.length()); 
        System.out.println(sb.append("hello")); 

        System.out.println(sb.delete(4,6)); 
        System.out.println(sb.insert(8, "ika"));
        System.out.println(sb.replace(6, 12, "tinuk"));  
    }
}
