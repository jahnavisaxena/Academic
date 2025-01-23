/*
 5. Count Occurrences of a Target Number in an Array
// Define an integer array with predefined values
// Set a target number whose occurrences need to be counted
// Initialize a counter to zero
// Use a loop to iterate through the array
// Compare each array element with the target number
// If they match, increment the counter
// Print the final count of occurrences of the target number

 */
public class question4 {
    public static void main(String[] args) {
        int arr[] ={1,3,44,7,3,2,9};
        int count =0,target = 3;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]== target)
            {
                count++;
            }
        }
        System.out.println(count);
    }
}
