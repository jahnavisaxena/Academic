/*
 1. Sum of All Integers Between 10 and 950 That Are Divisible by Both 6 and 9
// Define a variable to store the sum of numbers
// Loop through all numbers from 10 to 950
// Check if the number is divisible by both 6 and 9 using the modulus operator
// If true, add the number to the sum
// Print the final sum

 */
public class question1 {
    public static void main(String[] args) {
        int sum=0;
    for(int i=10;i<950;i++)
    {
        if(i % 6 == 0 || i % 9 ==0)
        {
            sum =sum +i;
        }
    }
    System.out.println("Sum of numbers divisible by 6 and 9 between 10 and 950 is: "+sum);
    }
}
