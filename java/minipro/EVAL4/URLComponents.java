import java.net.URL;

public class URLComponents {
    public static void main(String[] args) {
        try {
            URL url = new URL("https://www.example.com:8080/search?q=java");

            String protocol = url.getProtocol();
            System.out.println("Protocol: " + protocol);

            String hostName = url.getHost();
            System.out.println("Host Name: " + hostName);

            int defaultPort = url.getDefaultPort();
            System.out.println("Default Port: " + defaultPort);

            String query = url.getQuery();
            System.out.println("Query: " + query);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
