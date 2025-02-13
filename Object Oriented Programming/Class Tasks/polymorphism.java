//method overloading
//function with same name but different parameters
public class polymorphism {
    public static void main(String[] args) {
        calculator calc = new calculator();
        System.out.println(calc.sum(3,5));
        System.out.println(calc.sum(3,5,78));
        System.out.println(calc.sum((float)7.3,(float)9.3));//java usually sees decimal as double
        deer d1 = new deer();
        d1.eat();//child class wala function hi call hogaa
    }
}
class calculator{
    int sum(int a ,int b){
        return a+b;
    }
    float sum(float a,float b){
        return a+b;
    }
    int sum(int a,int b,int c){
        return a+b+c;
    }
}

//method overriding:parent and child classes contain same function but with different 
//definition
class animal{
    void eat(){
        System.out.println("eats anything");
    }
}

class deer extends animal{
    void eat(){
        System.out.println("eats grass");
    }
}
public class polymorphism {
    public static void main(String[] args) {
        Laptop l = new lenovo();
        l.copy();
        Laptop d = new dell();
        d.copy();
    }
}

abstract class Laptop{
abstract void copy();
}
class lenovo extends Laptop{
    @Override
    void copy(){
        System.out.println("copying");
    }
}

class dell extends Laptop{
    @Override
    void copy(){
        System.out.println("copying dell");
    }
}
