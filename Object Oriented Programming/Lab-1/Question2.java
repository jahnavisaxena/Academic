import java.util.*;
public class Question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SimpleInterest s1 = new SimpleInterest();
        
        System.out.println("Enter principle amount: ");
        int p = sc.nextInt();
        System.out.println("Enter interest rate: ");
        int r = sc.nextInt();
        System.out.println("Enter time: ");
        int t = sc.nextInt();
        System.out.println("Simple Interest is: "+s1.calculateSI(p, r, t));
        sc.close();
    }
}

class SimpleInterest{
    public double calculateSI(int p,int r,int t)
    {
        return (p*r*t)/100;
    }
}
