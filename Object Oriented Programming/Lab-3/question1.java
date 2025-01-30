/*Create a Student class with attributes for name and age. 
Implement a default constructor to assign default values and a 
parameterized constructor to initialize the attributes with user-defined
 values. Create objects using both constructors and display their details. */
public class question1{
    public static void main(String[] args) {
        student s1 = new student("tanay",22);
        student s2 =new student("jahnavi",19);
        System.out.println("Name: "+s1.name+ " Age: "+s1.age);
        System.out.println("Name: "+s2.name+ " Age: "+s2.age);
    }
}
class student{
    String name;
    int age;

    student(String name,int age)
    {
        this.name = name;
        this.age = age;
    }
}
