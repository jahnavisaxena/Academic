public class ex2 {
    public static void main(String[] args) {
        B obj = new B(); //we have to create a class since we cant have object of interface
        obj.show();
        obj.go();
        System.out.println(A.age);
    }
}

interface A {
    int age = 21; //by default the variables in interface are public static final
    double marks = 98.5;
    void show(); //interface have no concrete mathods only the abstact methods
    void go();
}

interface X{
    void rum();
}

interface Y extends X{
    void beer();
}

class B implements A,Y{ //dont get variables in implements class
    public void show(){
        System.out.println("Show");
    }
    public void go(){
        System.out.println("Go");
    }
    public void rum(){
        System.out.println("drinking rum");
    }
    public void beer(){
        System.out.println("drinking beer");
    }
}
