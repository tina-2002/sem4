import java.util.Vector;
public class vector{
    public static void main(String[] args){
        
        Vector<Integer> l=new Vector<Integer>();
        System.out.println("capacity : "+l.capacity());

        l.add(3);
        l.add(2);
        l.add(5);
        l.add(6);
        l.add(42);
        l.add(11);
        l.add(0);
        l.add(1);
        l.add(7);
        l.add(9);
        l.add(32);
        l.add(8);
        l.add(44);
        l.add(1);

        System.out.println(l);
        System.out.println("capacity : "+l.capacity());
        int e=l.get(2);
        System.out.println(e);

        l.add(1,9);
        System.out.println(l);


        e=l.get(2);
        System.out.println(e);

        l.set(1,25);
        System.out.println(l);

        l.remove(0);
        System.out.println(l);

        int size=l.size();
        System.out.println(size);

        for(int i=0;i<size;i++){
            System.out.println(l.get(i));
        }
        
        }
}

