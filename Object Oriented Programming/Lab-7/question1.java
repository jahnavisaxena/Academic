/*Write a Java program to create an abstract class Shape with an abstract method 
calculateArea(). Derive two classes Rectangle and Circle from Shape and override the 
calculateArea() method to calculate and print the area of a rectangle and a circle, 
respectively. Use the main() method to create objects of Rectangle and Circle and test their 
calculateArea() methods. */
public class question1{
    public static void main(String[] args) {
        rectangle r  =new rectangle();
        r.length = 10;
        r.breadth =14;
        r.calculateArea();
        circle c = new circle();
        c.radius = 14;
        c.calculateArea();
    }
}

abstract class Shape{
    abstract void calculateArea();
}

class rectangle extends Shape{
    double length;
    double breadth;
    @Override
    void calculateArea(){
        double area = length*breadth;
        System.out.println("Area of rectange is : "+area);
    }
}

class circle extends Shape{
    double radius;
    @Override
    void calculateArea(){
        double area = 3.14*radius*radius;
        System.out.println("Area of circle is : "+area);
    }
}
