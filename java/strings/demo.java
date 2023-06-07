import java.util.Scanner;
public class demo {
    public static void main(String[] args){
        String name= new String("steve");
        System.out.println(name);
        String name1="jobs";
        System.out.println(name1);


        System.out.print(name);//after this cursor wont go to next line and instead be there only
        System.out.println(name1);
        System.out.print(name);

        int i=9;
        float j=6.5f;
        System.out.printf("the value of i = %d  and j = %f\n",i,j);
        
        // user input
        Scanner sc=new Scanner(System.in);
        String wordline=sc.nextLine();
        System.out.println(wordline);

        String name2="AMAZINGSPIDERMAN";
        int len=name2.length();
        System.out.println("length of ur name is "+ len);
        
        System.out.println( name2.toLowerCase());
        String lwr = name2.toLowerCase();
        System.out.println(lwr);
        String upr = name2.toUpperCase();
        System.out.println(upr);
        
        String notrim="     amazing SPIDER   MAN      ";
        System.out.println(notrim);
        System.out.println(notrim.trim());

        System.out.println(name2.substring(2));
        System.out.println(name2.substring(0, 7));

        String n4="Harryy";
        System.out.println(n4.replace('a', 'n'));
        System.out.println(n4.replace("rry","tara"));

        System.out.println(name2.startsWith("AMAZIN"));
        System.out.println(n4.endsWith("tara"));

        System.out.println(name2.charAt(4));
        System.out.println(name2.indexOf('Z'));
        System.out.println(name2.indexOf('D', 3));
        System.out.println(name2.lastIndexOf("A"));
        System.out.println(name2.equals("amazing"));
        System.out.println(name2.equalsIgnoreCase("amazingspiderman"));

        //escape sequence is a backslash character \
        //escape sequence \" is used to print " in
        System.out.println("i am an escape sequnce\" Double quote");
        System.out.println("i am an escape sequnce \\n Double quote");
        System.out.println("i am an escape sequnce\t Double quote");

        //input an email address from user 
        //create a username by deleting sequence at @
        // eg username for akanksha@gmail.com would be akanksha
        String mail=sc.nextLine();
        System.out.println("your mail is :"+mail);
        String u=mail.substring(0, mail.indexOf('@'));

        System.out.println("your username is :"+u);

    }
}
