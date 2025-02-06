public class abstractClass {
    public static void main(String[] args) {
        circle c1 =new circle(14.2);
        System.out.println("Name of the shape is: "+c1.name);
        System.out.println("Area of circle is: "+c1.area());
    }
}
abstract class shape{
    String name;
    shape(String name)
    {
        this.name = name;
    }
    abstract double area();
    public void displayName()
    {
        System.out.println("shape"+name);
    }
}

class circle extends shape{
    double radius;
    circle(double radius)
    {
        super("circle");//passing name circle to parent class
        this.radius = radius;
    }
    double area()
    {
        return 3.14*radius*radius;
    }
}

class square extends shape{
    double side;
    square(double side)
    {
        super("square");
        this.side =side;
    }
    double area()
    {
        return side*side;
    }
}
