package access modifers.p2;
class otherpackage{
    otherpackage(){
        p1.Protection p=new p1.Protection();
        System.out.println("Protection2 class");
        System.out.println("i : "+i);
        System.out.println("i_pri: "+i_pri);
        System.out.println("i_pro : "+i_pro);
        System.out.println("i_pub : "+i_pub);
    }
}