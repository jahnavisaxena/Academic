/*
 Given an array containing N-1 unique numbers from 1 to N, write a Java program to find
the missing number. 
 */
public class question8 {
    public static void main(String[] args) {
        int num[] ={1, 5, 6, 2, 4};
        int expectedSum =0;
        int actualSum =0;
        for(int i =1 ;i<num.length+1;i++)
        {
            expectedSum += i;
        }

        for(int i=0;i<num.length;i++)
        {
            actualSum+=num[i];
        }

        int missing = actualSum - expectedSum;
        System.out.println("Missing number is: "+missing);
    }
}
