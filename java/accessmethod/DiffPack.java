package AccessMod;
import AccessModifiers.AccessModif;
class Access2 extends AccessModifiers.AccessModif{
    Access2(){
        AccessModif.i();
        AccessModif.i_pro();
        AccessModif.i_pub();
        AccessModif.i_pri();
    }
}
class Acc{
    Acc(){
        AccessModif x=new AccessModif();
        x.i();
        x.i_pro();
        x.i_pri();
        x.i_pub();
    }
}
public class DiffPack {
    
}