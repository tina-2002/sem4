import java.util.ArrayList;
public class arraylist {
    public static void main(String[] args){
        
        ArrayList<Integer> l=new ArrayList<Integer>();
        l.add(3);
        l.add(2);
        l.add(5);

        System.out.println(l);

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
