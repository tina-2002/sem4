public import java.sql.*;
//import java.util.Scanner;
public class app2 {
    public static void main(String[] args) throws Exception {
        String url="jdbc:mysql://localhost:3306/mysql"; //resorse ka jo my sql hai uska address dalna hai (jdbc defines ki hum java ko data base se connect karre hai )
        String uname="root";
        String pass="Anjal@1234";

        Class.forName("com.mysql.cj.jdbc.Driver"); //external jar file 
        Connection con=DriverManager.getConnection(url,uname,pass);
        Statement st=con.createStatement(); 
        
        // //execute query 
        //String q="Select * from persons";
        // ResultSet rs=st.executeQuery(q);
        // while(rs.next()){
        //     String ud=rs.getInt(1)+":"+rs.getString(2)+":"+rs.getString(3);
        //     System.out.println(ud);
        // }
        // rs.close();

        // //execute update
        // String qu = "insert into Persons values(4, 'Rashmi', 'Kadu')";
        // int i = st.executeUpdate(qu);
        // System.out.println("rows added"+i);

        // //execute delete 
        // String du = "delete from Persons where LastName='Kadu'";
        // int j = st.executeUpdate(du);
        // System.out.println("rows deleted"+j);
        // //execute delete 
        // String du1 = "delete from Persons where LastName='Kholi'";
        // int k = st.executeUpdate(du1);
        // System.out.println("rows deleted"+k);


        // //execute will return boolean
        // //executeUpdate will return integer
        // //exeuteQuery will return result set
        // Boolean ret = st.execute(du);
        // System.out.println("Return value is: "+ ret.toString());


        // st.addBatch("insert into Persons values(4, 'Virat', 'Kholi')");
        // st.addBatch("insert into Persons values(5, 'Rashmi', 'Kadu')");
        // st.executeBatch();

//---------------------------------------------------------------------------------------------------
        // PreparedStatement pst = con.prepareStatement("insert into Persons values(?,?,?)");
        // Scanner sc = new Scanner(System.in);
        // int id;
        // System.out.println("Enter id: ");
        // id = sc.nextInt();
        // pst.setInt(1, id);
        // String name;
        // String lastname;
        // System.out.println("Enter name: ");
        // name = sc.next();
        // pst.setString(2, name);
        // System.out.println("Enter last name : ");
        // lastname = sc.next();
        // pst.setString(3, lastname);
        // int l = pst.executeUpdate();
        //sc.close();
        //------------------------------------------------------------------------------------------

        String q1="Select * from Persons";
        PreparedStatement ps = con.prepareStatement(q1,ResultSet.TYPE_SCROLL_SENSITIVE,ResultSet.CONCUR_UPDATABLE);
        ResultSet rs1 = ps.executeQuery();

        //1. Moves the cursor to the given rown number in this ResultSet Object
        rs1.absolute(2);

        //2. Retrieves the currenct row number. The first row is number 1, the second number 2, and so on.
        int rowNum=rs1.getRow();
        System.out.println("Row num: "+rowNum);

        //3.  oves the cursor to the end of this ResultSet Object
        rs1.afterLast();

        //4. Retrieves whether the cursor is after the last row in this ResultSet object.
        boolean afterLast = rs1.isAfterLast();
        System.out.println("AfterLast: "+afterLast);

        //5. Moves the cursor to the front of this ResultSet object, just before the first row
        rs1.beforeFirst();

        //6. Retrieves whether the cursor is before the first row in thie ResultSet object.
        boolean beforeFirst = rs1.isBeforeFirst();
        System.out.println("BeforeFIrst: "+beforeFirst);

        //7. Moves the cursor to the first row in this ResultSet object.
        rs1.first();

        //8. Retrieves whtther the cursor in on the first ron of this ResultSet object.
        boolean isFirst = rs1.isFirst();
        System.out.println("IsFirst: "+isFirst);

        //9. Moves the cursor to the last rown in this ResultSet object.
        rs1.last();
        boolean isLast = rs1.isLast();
        System.out.println("IsLast: "+isLast);

        //10. Moes the cursor a relative number of rows, either positive or negative.
        rs1.absolute(3);
        rs1.relative(-2);

        int rowNum2 = rs1.getRow();
        System.out.println("Row num2: "+ rowNum2);

        // String q1 = "Select & from persons";
        // PreparedStatement ps = con.prepareStatement(q1, ResultSet.TYPE_SCROLL_SENSITIVE, ResultSet.CONCUR_UPDATABLE);
        // ResultSet rs1 = ps.executeQuery();

        // //1. moves the cuesor to the givn row numbr in this ResultSet object 
        // rs1.absolute(2);

        // //2. Retrives the current row number. the first row number 1, the second row numwbr 2 and so on.
        // int rowNum = rs1.getRow();
        // System.out.println("Row num: "+rowNum);

        // //3. moves the cursor t the end of this ResultSet object 
        // rs1.afterLast();

        // //4. Retrives whteter the cursor is after the last row in this ResultSet object.
        // boolean afterLast = rs1.isAfterLast();
        // System.out.println("After Last : "+afterLast);

        // //5. Moves the cursor to the front of the ResultSet object, just before the first row.
        // rs1.beforeFirst();

        // //6. Retrives whether the cursor is before the first row in this ResultSet object.
        // boolean beforeFirst = rs1.isBeforeFirst();
        // System.out.println("BeforeFirst:"+beforeFirst);

        // //7.Moves the cursor to the first row in the ResultSet object.
        // rs1.first();

        // //8. Retrives whether the cursor is on the first row of this ResultSet object.
        // boolean isFirst = rs1.isFirst();
        // System.out.println("IsFirst: "+isFirst);

        // //9. Moves the cursor to the last row in this ResultSet object.
        // rs1.last();
        // boolean isLast = rs1.isLast();
        // System.out.println("IsLast: "+isLast);

        // //10. moves the cursor a relative numver of rows, eihter positive or negative 
        // rs1.absolute(3);
        // rs1.relative(-2);
        // int rowNum2 = rs1.getRow();
        // System.out.println("Row num2: "+rowNum2);
        st.close();
        con.close();


    }
} app2 {
    
}
