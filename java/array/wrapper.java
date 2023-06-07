// for all primitive data types ,we have wrapper classes eg Integer ,Float ,Character
public class wrapper {
    public static void main(String[] args){
        int i =5; //primitive data type
        Integer ii=new Integer(8);   //boxing
        Integer jj=8;  //autoboxing
        System.out.println(i);
        System.out.println(ii);
        System.out.println(jj);


        int k=jj.intValue(); //unboxing
        int r=jj;  //autounboxing 

    }

}
