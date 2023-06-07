import java.sql.*;
import java.util.Scanner;
public class app3 {
    public static void main(String[] args) throws Exception {
        String url = "jdbc:mysql://localhost:3306/mysql";
        String uname = "root";
        String pass = "tina@2402";
       // String q="Select * from info1";

        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection con=DriverManager.getConnection(url,uname,pass);
        Statement st=con.createStatement();
      /*  ResultSet rs=st.executeQuery(q);
        while(rs.next())
        {
            String ud=rs.getInt(1)+ ":"+rs.getString(2)+":"+rs.getString(3);
            System.out.println(ud);
        }
 */
      /*   String qu = "insert into info1 values(4,'mansi','Gangwani')";
        int i=st.executeUpdate(qu);
        System.out.println("rows affected " +i);
        */
       // rs.close();

        // String q2="delete from info1 where personid=3";
        // int j=st.executeUpdate(q2);
        // System.out.println("rows deleted " +j);

        // boolean ret= st.execute(q2);
        // System.out.println("return value is:  " + ret.toString());

        // batch processing 
        st.addBatch("insert into info1 values(5,'bucky','Gangwani')");
        st.addBatch("insert into info1 values(6,'tinku','Gangwani')");
        st.executeBatch();


        PreparedStatement pst=con.prepareStatement("insert into info1 values(?,?,?)");
        Scanner sc=new Scanner(System.in);
        int id;
        System.out.println("enter id");
        id=sc.nextInt();
        pst.setInt(1, id);
        pst.setString(2, "rahul");
        pst.setString(3, "sharma");
        int k=pst.executeUpdate();

        st.close();
        con.close();

        
    }
}
