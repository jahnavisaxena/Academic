public class task5 {
    public static void main(String[] args) {
        Bike b = new Bike();
        b.start();
        b.stop();
        CustomPrint cp = new CustomPrint();
        cp.print();
        cp.printDefault();
        Airplane a = new Airplane();
        a.move();
        a.fly();
        AmphibiousCar ac = new AmphibiousCar();
        ac.drive();
        ac.floatOnWater();
        System.out.println(MathOperations.add(2,3));
        System.out.println(MathOperations.subtract(2,3));
    }
}
// q1
interface Vehicle{
    void start();
    void stop();
}
//q2
interface Printable{
    void print();
    default void printDefault(){
        System.out.println("Printing default");
    }
}

//q3
interface Movable {
    void move();
}

interface flyable extends Movable{
    void fly();
}

//q4
interface Drivable{
    void drive();
}

interface Floatable {
    void floatOnWater();
}

class AmphibiousCar implements Drivable,Floatable{
    public void drive(){
        System.out.println("driving");
    }
    public  void floatOnWater(){
        System.out.println("floating");
    }
}

//q5
interface MathOperations{
    static int add(int a,int b)
    {
        return a+b;
    }
    static int subtract(int a,int b){
        return Math.abs(a-b);
    }

}
class Airplane implements flyable{
    public void move()
    {
        System.out.println("moving");
    }
    public void fly()
    {
        System.out.println("flying");
    }
}

class CustomPrint implements Printable{
    public void print(){
        System.out.println("Printing custom");
    }
}

class Car implements Vehicle{
    public void start(){
        System.out.println("starting car");
    }

    public void stop(){
        System.out.println("car stopping");
    }
}

class Bike implements Vehicle{
    public void start(){
        System.out.println("starting bike");
    }
    public void stop(){
        System.out.println("bike stopping");
    }
}
