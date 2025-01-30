public class task3 {
    public static void main(String[] args) {
        student s1 = new student("tanay",22);
        student s2 = new student("jahnavi",78);
        student s10 = new student("hritvik",100);
        System.out.println(s1.name);
        System.out.println(s2.roll_no);
        System.out.println(s1.name +" and "+s1.roll_no);
        System.out.println(s2.name +" and "+s2.roll_no);
        System.out.println(s10.name +" and "+s10.roll_no);
        Test t1 = new Test(10.5);
        ;
;

    }
}

class student{
    String name;
    int roll_no;
//parameterized constructor
//this keyword to point here
    student(String name,int roll_no)
    {
        this.name= name;
        this.roll_no = roll_no;
    }
}

class Test{
    double d;
    Test(double d)//since bracket mein integer hai so it will call int constructor
    {
        this(10);
        System.out.println("double given");
    }
    Test(int i)
    {
        this();//kyuki yaha pe koi value nahi hai so it will call no value constructor
        System.out.println("int given");
    }
    Test()//first this construtor will pe printed
    {
        System.out.println("no value"); 
    }
}
