import java.util.*;
public class Question3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.close();
    }
}
class Calculator{
    public int addition(int a,int b)
    {
        return a+b;
    }

    public int subtraction(int a,int b)
    {
        return Math.abs(a-b);
    }
    public int multiplication(int a,int b)
    {
        return a*b;
    }
}
