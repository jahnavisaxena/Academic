/*
 Create a Calculator class that contains a method add() to perform addition. 
 Overload the add() method to handle different types and numbers of parameters,
  such as adding two integers, two doubles, and three integers. Create an object 
  of the class and demonstrate all method variations.
 */
public class question3 {
    public static void main(String[] args) {
        Calculator c1 = new Calculator();
        System.out.println("Addition of two integers: "+c1.add(4,5));
        System.out.println("Addition of two doubles: "+c1.add(9.2,8.7));
        System.out.println("Addition of three integers: "+c1.add(3,4,5));
    }
}
class Calculator{
    public int add(int a,int b)
    {
        return a+b;
    }
    public double add(double a,double b)
    {
        return a+b;
    }
    public int add(int a,int b,int c)
    {
        return a+b+c;
    }
}
