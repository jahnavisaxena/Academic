/* 1. Create two strings /
2. Find the length of both strings/
3. Concatenate the strings/
4. Print the lengths of both strings/
5. Print the concatenated string/
6. Swap the first characters of both strings
7. Swap the first characters of each string
8. Print the swapped strings
9. Input the index number and print the character at that index/
10. Check if the index is valid/
11. Input a character and find its index/
12. Find the index of the character/
13. Check if the character exists in the string/
14. Split the concatenated string at space/
15. Loop through the concatenated string and print repeated characters and their counts/
16. Reverse the concatenated string using a loop/
17. Identify vowels in the concatenated string and print their index numbers
18. Create an array and perform the sum calculations
19. Loop through the array and calculate the sums and find min/max
20. Find minimum and maximum values */
import java.util.*;
public class ass1 {               
    public static void main(String[] args) {
        String s1 = new String("Hello");
        String s2 = new String("World");

        System.out.println("Length of string 1 is: "+s1.length()+" and string 2 is: "+s2.length());

        String s3 = s1+s2;
        System.out.println("Concatenated string : "+s3);

        System.out.println("Length of concatenated string is: "+s3.length());

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the index number: ");
        int index = sc.nextInt();
        if(index<=s3.length())
        {                                                                                                                                                                                                                                             
            System.out.println("valid index");
        }
        else{
            System.out.println("invalid index");
        }
        System.out.println("Character at index "+index+" is "+s3.charAt(index));

        System.out.println("Enter a character: ");
        char ch = sc.next().charAt(0);
        System.out.println("Index of character is: "+s3.indexOf(ch));

        String space[] = s3.split("  ");
        for(String i : space)
        {
            System.out.println(i);
        }

        String r=" ";
        char c;
        for(int i=0;i<s3.length();i++)
        {
            c = s3.charAt(i);
            r=ch+r;
        }
        System.out.println((r));

        int sum=0;
    int arr1[] ={1,3,2,5,9,9,8,10};
    for(int i=0;i<arr1.length;i++)
    {
        sum += arr1[i];
        
    }
    System.out.println("Sum is: "+sum);

    int sumEvenOdd = 0;
    for(int i=0;i<arr1.length;i++)
    {
        if(arr1[i]%2==0)
        {
            sumEvenOdd+=arr1[i];
        }
        else{
            sumEvenOdd+=arr1[i];
        }
    }
    
    }

    
    
}
