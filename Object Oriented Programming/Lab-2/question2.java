/*
 2. Sum of Digits Using a While Loop
// Import Scanner for user input
// Prompt the user to enter an integer
// Initialize a sum variable to store the sum of digits
// Use a while loop to extract each digit using modulus operation
// Add the extracted digit to the sum
// Remove the last digit from the number using division
// Continue until the number becomes zero
// Print the total sum of the digits

 */
import java.util.*;
public class question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a =sc.nextInt();
        int sum=0; 
        while(a != 0)
        {
            int last_digit = a%10; //432 % 10 = 2
            sum = sum + last_digit; 
            a = a/10; //remove lasr digit
        }
        System.out.println("sum of digits: "+sum);
    }
}
