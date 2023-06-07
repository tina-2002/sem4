// AIM : Bank ATM Simulator. Design an ATM simulator that handles exceptions for insufficient funds, invalid PINs, or withdrawal limits.
import java.util.Scanner;

class BankAccount {
    private String accountNumber;
    private int pin;
    private double balance;

    public BankAccount(String accountNumber, int pin, double balance) {
        this.accountNumber = accountNumber;
        this.pin = pin;
        this.balance = balance;
    }

    public boolean validatePin(int enteredPin) {
        return enteredPin == pin;
    }

    public double getBalance() {
        return balance;
    }

    public void withdraw(double amount) throws InsufficientFundsException, WithdrawalLimitExceededException {
        if (amount > balance) {
            throw new InsufficientFundsException();
        } else if (amount > 1000) {
            throw new WithdrawalLimitExceededException();
        } else {
            balance = balance - amount;
            System.out.println("Withdrawal successful.");
            System.out.println("Remaining balance: " + balance);
        }
    }
}

class InsufficientFundsException extends Exception {
    public InsufficientFundsException() {
        super("Insufficient Funds in the account.");
    }
}

class WithdrawalLimitExceededException extends Exception {
    public WithdrawalLimitExceededException() {
        super("Withdrawal limit exceeded. Maximum withdrawal limit is ₹1000.");
    }
}

public class BankATMSimulator {
    private static final String ACCOUNT_NUMBER = "21070521061";
    private static final int PIN = 12345;

    public static void main(String[] args) {
        BankAccount account = new BankAccount(ACCOUNT_NUMBER, PIN, 5000.0);
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter account number : ");
        String enteredAccountNumber = sc.nextLine();

        System.out.print("Enter PIN : ");
        int enteredPin = sc.nextInt();

        if (!enteredAccountNumber.equals(ACCOUNT_NUMBER) || !account.validatePin(enteredPin)) {
            System.out.println("Invalid account number or PIN.");
            System.out.println("Please Try again Later!");
            return;
        }

        System.out.print("Enter withdrawal amount: ");
        double withdrawalAmount = sc.nextDouble();

        try {
            account.withdraw(withdrawalAmount);
        } catch (InsufficientFundsException e) {
            System.out.println("Error : " + e.getMessage());
        } catch (WithdrawalLimitExceededException e) {
            System.out.println("Error : " + e.getMessage());
        }
    }
}