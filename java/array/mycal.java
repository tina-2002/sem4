public class Calculator{
    public int add(int a, int b){
        System.out.println("the desired result =");
        return a+b;
    }
    public int add(int a, int b,int c){
        System.out.println("the desired result =");
        return a+b+c;
    }
    public int sub(int a, int b){
        System.out.println("the desired result =");
        return a-b;
    }
    public int sub(int a, int b,int c){
        System.out.println("the desired result =");
        return a-b-c;
    }
    public int multiply(int a, int b){
        System.out.println("the desired result =");
        return a*b;
    }
    public int multiply(int a, int b,int c){
        System.out.println("the desired result =");
        return a*b*c;
    }
}
public class mycal {
    public static void main(String args[]) {
        Calculator c=new Calculator();
        c.add(2,3);
        c.add(1,2,3);
        c.sub(9,3,4);
        
      
    }
}