/*
 Step 1: Define the Abstract Class BankAccount

1. Define an abstract class named `BankAccount`.
2. Create a private variable `balance` to store the account balance.
3. Define a constructor to initialize the balance.
4. Create a public method `getBalance()` to return the balance.
5. Declare an abstract method `accountInfo()` that will be implemented in subclasses.


Step 2: Define the Subclass SavingsAccount

1. Define a class named `SavingsAccount` that extends `BankAccount`.
2. Declare an instance variable `interestRate`.
3. Create a constructor that:
   - Calls `super(initialBalance)` to initialize the balance.
   - Initializes `interestRate` using `this.interestRate = interestRate`.
4. Implement the `accountInfo()` method:
   - Print "Savings Account Balance: $" followed by the result of `getBalance()`.
   - Print "Interest Rate: " followed by `interestRate` with "%".


Step 3: Create the main() Method

1. Inside the `main()` method:
   - Create an object `myAccount` of type `SavingsAccount` with:
     - Initial balance = $5000
     - Interest rate = 3.5%
   - Call `accountInfo()` on `myAccount`.


   advantages
   -> security
   -> data privacy
   -> data integrity
 */
public class task_3 {
    public static void main(String[] args) {
        SavingsAccount myAccount = new SavingsAccount(5000,3.5);
        myAccount.accountInfo();
    }
}

abstract class BankAccount{
    private double balance;
    public BankAccount(double initialBalance)
    {
        this.balance = initialBalance;
    }
    public double getBalance()
    {
        return balance;
    }
    public abstract void accountInfo();
}

class SavingsAccount extends BankAccount{
    private double interestRate;
    public SavingsAccount(double initialBalance, double interestRate)
    {
        super(initialBalance);
        this.interestRate = interestRate;
    }

    public void accountInfo() {
        System.out.println("Savings Account Balance: $" + getBalance());
        System.out.println("Interest Rate: " + interestRate + "%");
    }
}
