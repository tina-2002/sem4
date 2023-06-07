import java.sql.*;

public class App {
    public static void main(String[] args) throws Exception {
        String url = "jdbc:mysql://localhost:3306/riya";
        String uname = "root";
        String pass = "riya@2402";

        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection con = DriverManager.getConnection(url, uname, pass);
        Statement st = con.createStatement();

        String query = "SELECT SRn, firstname, lastname FROM Person";
        ResultSet rs = st.executeQuery(query);

        while (rs.next()) {
          String ud = rs.getInt(1) + ":" + rs.getString(2) + ":" + rs.getString(3);
          System.out.println(ud);
      }
      while (rs.next()) {
        String ud = rs.getInt(1) + ":" + rs.getString(2) + ":" + rs.getString(3);
        System.out.println(ud);
    }

        st.addBatch("INSERT INTO info1 VALUES(1,'Rema','Rockfold')");
        st.addBatch("INSERT INTO info1 VALUES(2,'Kret','Toyskew')");
        st.executeBatch();

        rs.close();
        st.close();
        con.close();
    }
}
