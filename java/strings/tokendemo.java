import java.util.Scanner;
import java.util.StringTokenizer;

public class tokendemo {
    public static void main(String[] args){
        String s =" this is my string tokenizer";
        StringTokenizer st =new StringTokenizer(s);
        while(st.hasMoreTokens()){
            System.out.println(st.nextToken());
        }
        String s1=" this is my new string tokenizer";
        StringTokenizer st1 =new StringTokenizer(s1);
        while(st1.hasMoreTokens()){
            System.out.println(st1.nextToken());
        }

    }
}
