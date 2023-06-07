package AccessModifiers;
public class AccessModif {
    static int i(){
       System.out.println("1");
        return 0;
    }
    static Pack p=new Pack();
    static protected int i_pro(){
        System.out.println("2");
        return 0;
    }
    static private int i_pri(){
       System.out.println("3");
        return 0;
    }
    static public int i_pub(){
        System.out.println("4");
        return 0;
    }
    public AccessModif(){
        AccessModif x=new AccessModif();
        x.i();
        x.i_pri();
        x.i_pro();
        x.i_pub();
    }
}