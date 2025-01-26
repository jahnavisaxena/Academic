import java.util.*;
public class calc{
    public static void main(String[] args) {
        calculator c1 = new calculator();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the values of a,b and c: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        System.out.println(c1.summation(a,b));
        System.out.println(c1.substraction(a, b));
        System.out.println(c1.multiplication(a, b, c));
        System.out.println(c1.division(a, c));
        sc.close();
    }
}

class calculator{
    public int summation(int a,int b)
    {
        return a+b;
    }

    public int substraction(int a ,int b)
    {
        return Math.abs(a-b);
    }

    public  int multiplication(int a,int b,int c)
    {
        return a*b*c;
    }
    public int division(int a,int c)
    {
        return a/c;
    }
}
