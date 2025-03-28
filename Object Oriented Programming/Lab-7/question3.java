/*Write a Java program to create an interface Bank with methods deposit(double amount) 
and withdraw(double amount). Implement this interface in a class Account that overrides 
these methods to perform deposit and withdrawal operations on a balance variable. Create 
another class BankDemo with a main() method to test the functionality by depositing and 
withdrawing amounts and displaying the updated balance */
public class question3 {
    public static void main(String[] args) {
        Account a = new Account();
        a.balance = 10000;
        a.deposit(120);
        a.withdraw(100);
    }
}

interface Bank{
    void deposit(double amount);
    void withdraw(double amount);
}

class Account implements Bank{
    double balance;
    @Override
    public void deposit(double amount){
        balance = balance + amount;
        System.out.println("Current balance : "+balance);
    }
    public void withdraw(double amount){
        balance = balance - amount;
        System.out.println("Balance after withdrawal : "+balance);
    }
}
