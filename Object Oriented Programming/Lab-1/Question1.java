import java.util.*;
public class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        triangle t1 = new triangle();
        System.out.println("Enter base of triangle: ");
        int b = sc.nextInt();
        System.out.println("Enter height of triangle: ");
        int h = sc.nextInt();
        System.out.println("Area of triangle is: "+t1.CalculateArea(b,h));
        sc.close();
    }
}

class triangle{
    public double CalculateArea(int b,int h)
    {
        return (b*h)/2;
    }

}
