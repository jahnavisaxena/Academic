/*
 *Write a Java program that copies all elements from one array to another using a loop. 
 */
public class question7 {
    public static void main(String[] args) {
        int original[] = {1,2,3,4,5,6,6,7,6,4};
        int copied[] = new int[original.length];
        for(int i = 0;i<original.length;i++)
        {
            copied[i] = original[i];
        }
        System.out.println("Original array is: ");

        for(int i=0;i<original.length;i++)
        {
            System.out.print(" "+original[i]+" ");
        }
        System.out.println();

        System.out.println("Copied array is:");
        for(int i=0;i<copied.length;i++)
        {
            System.out.print(" "+copied[i]+" ");
        }
   }
}
