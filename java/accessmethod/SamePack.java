package AccessModifiers;
import Print.Pack;
class Derived extends AccessModif{
    Derived(){
        AccessModif.i();
        AccessModif.i_pri();
        AccessModif.i_pro();
        AccessModif.i_pub();
    }
}
class SamePackage{
    SamePackage(){
        AccessModif a=new AccessModif();
        a.i();
        a.i_pri();
        a.i_pro();
        a.i_pub();
    }
}
public class SamePack {
}