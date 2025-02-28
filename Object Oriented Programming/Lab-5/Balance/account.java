/*
 Create a package named Balance containing a class Account with a method 
Display_Balance that displays the account balance. Write another program to import the 
Balance package and call the Display_Balance method from the Account class. 
 */
package Balance;

public class account {
    double balance;
    public void display_balance(double balance){
        this.balance = balance;
        System.out.println("balance is: "+balance);
    }
}
