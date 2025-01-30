/*Create a BankAccount class with a private variable balance to store the account balance. 
Implement a public method deposit(double amount) to add funds, 
a protected method withdraw(double amount) to deduct funds, and a default-access
 method checkBalance() to display the current balance. Create an object of the class and
  demonstrate which methods and variables can be accessed both inside and outside the class. */
public class question2 {
    public static void main(String[] args) {
        BankAccount b1 = new BankAccount();
        b1.deposit(100);
        b1.balance = 10000;
        b1.withdraw(1984);
        b1.checkBalance();
    }
}
class BankAccount{
    private double balance = 100000;
    public void deposit(double amount)
    {
        balance = balance + amount;
    }
    protected void withdraw(double amount){
        balance = balance - amount;
    }
    default void checkBalance()
    {
        System.out.println("Current balance: "+balance);
    }
}
