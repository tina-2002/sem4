package p1;
public class protection{
    int i=45;
    private int i_pri=89;
    protected int i_pro=67;
    public int i_pub=34;

    public protection(){
        System.out.println("Protection class");
        System.out.println("i : "+i);
        System.out.println("i_pri: "+i_pri);
        System.out.println("i_pro : "+i_pro);
        System.out.println("i_pub : "+i_pub);
    }
}
