import java.util.Arrays;

public class string {
    public static void main(String[] args) {
        String s1 = " Hello World ";//string is a class , strng pool memory
        System.out.println(s1.length());
        System.out.println(s1.trim().length());//cuts the space
      //  String s2 = new String("World");//object -> heap memory
      String s2 = s1.substring(6);
        System.out.println(s2);
        String s3 ="hello";
       // System.out.println(s1 == s2);//checking memory addresses 
       // System.out.println(s1==s3);
       // System.out.println(s1.equals(s2));
       // System.out.println(s1.equalsIgnoreCase(s3));
       // System.out.println(s1.startsWith(s3));
       // System.out.println(s1.endsWith(s3));
        System.out.println(s1.contains("m"));
        System.out.println(s2.toUpperCase());
        char A[] = s1.toCharArray();
        System.out.println(A[1]);
        System.out.println(s1.split("^"));
        //char s[] = Arrays.toString(s1.split(" "));
        //isEmpty,isBlank
        //1.find the number of characters in string 
        //2. find no. of words
        //3. replace g with *
    }
}
