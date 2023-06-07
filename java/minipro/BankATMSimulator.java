//AIM:- Bank ATM Simulator. Design an ATM simulator that handles exceptions for insufficient funds, 
//      invalid PINs, or withdrawal limits.
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
    private static final String ACCOUNT_NUMBER_1 = "21070521061";
    private static final int PIN_1 = 12345;
    private static final String ACCOUNT_NUMBER_2 = "21070521062";
    private static final int PIN_2 = 54321;
    private static final String ACCOUNT_NUMBER_3 = "21070521063";
    private static final int PIN_3 = 98765;

    public static void main(String[] args) {
        BankAccount account1 = new BankAccount(ACCOUNT_NUMBER_1, PIN_1, 5000.0);
        BankAccount account2 = new BankAccount(ACCOUNT_NUMBER_2, PIN_2, 3000.0);
        BankAccount account3 = new BankAccount(ACCOUNT_NUMBER_3, PIN_3, 8000.0);
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter account number : ");
        String enteredAccountNumber = sc.nextLine();

        System.out.print("Enter PIN : ");
        int enteredPin = sc.nextInt();

        BankAccount selectedAccount = null;

        if (enteredAccountNumber.equals(ACCOUNT_NUMBER_1) && account1.validatePin(enteredPin)) {
            selectedAccount = account1;
        } else if (enteredAccountNumber.equals(ACCOUNT_NUMBER_2) && account2.validatePin(enteredPin)) {
            selectedAccount = account2;
        } else if (enteredAccountNumber.equals(ACCOUNT_NUMBER_3) && account3.validatePin(enteredPin)) {
            selectedAccount = account3;
        }

        if (selectedAccount == null) {
            System.out.println("Invalid account number or PIN.");
            System.out.println("Please Try again Later!");
            return;
        }

        System.out.print("Enter withdrawal amount: ");
        double withdrawalAmount = sc.nextDouble();

        try {
            selectedAccount.withdraw(withdrawalAmount);
        } catch (InsufficientFundsException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (WithdrawalLimitExceededException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
