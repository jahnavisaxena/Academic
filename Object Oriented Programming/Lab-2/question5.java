/*
5. Find the Second Largest Element in an Integer Array Without Sorting
// Define an integer array with some values
// Initialize two variables: one for the largest number and one for the second largest
// Loop through the array to find the largest number
// If the current number is greater than the largest number, update both largest and second largest
// Otherwise, if it is greater than the second largest but not equal to the largest, update second largest
// Print the second largest number found in the array
*/
public class question5 {
    public static void main(String[] args) {
        int arr[]={4,5,7,6,8,2,1};
        int largest_num = -1;
        int second = -1;
        for(int i=1;i<arr.length;i++)
        {
           if(largest_num<arr[i])
            {
                largest_num = arr[i];
                
            }
        }
        for(int i=0;i<arr.length;i++)
        {
            elif(second < arr[i] && arr[i]!=largest_num)
            {
                second = arr[i];
            }

        }
        System.out.println(largest_num + ","+second);   
    }
}
