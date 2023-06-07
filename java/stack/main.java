package stack;
import mystack1.stack;

public class main{
    public static void main(String[] args){
        stack s =new stack(4);

        s.push(45);
        s.push(46);
        s.push(47);

        s.display();

        s.pop();
        s.display();
    }
}
