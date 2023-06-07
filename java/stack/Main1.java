import java.util.Scanner;

class NotPalindromeException extends Exception {
  public NotPalindromeException(String message) {
    super(message);
  }
}

class PalindromeChecker {
  public static boolean isPalindrome(String str) {
    int n = str.length();
    for (int i = 0; i < n/2; i++) {
      if (str.charAt(i) != str.charAt(n-i-1)) {
        return false;
      }
    }
    return true;
  }
}

public class Main1 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter a string: ");
    String str = scanner.nextLine();
    scanner.close();

    try {
      if (!PalindromeChecker.isPalindrome(str)) {
        throw new NotPalindromeException("The string is not a palindrome.");
      }
      System.out.println("The string is a palindrome.");
    } catch (NotPalindromeException e) {
      System.out.println(e.getMessage());
    }
  }
}
