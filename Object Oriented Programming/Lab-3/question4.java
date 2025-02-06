/*
 Create a University class that has a static variable universityName and a non-static variable
studentName. Include a static method to display the university name. Then, create multiple
student objects to demonstrate how the static variable is shared among all instances, while
the non-static variable holds unique values for each object. 

 */
public class question4 {
    public static void main(String[] args) {
        University u1 = new University();
        University u2 = new University();
        u1.universityName = "THAPAR";
        u2.universityName = "UPES";//This instance is shared among all
        u1.displayName();//IIT
        u2.displayName();//IIT
        u1.studentName = "Tanay";
        u2.studentName = "Jahnavi";
        System.out.println("Student name of u1: "+u1.studentName);
        System.out.println("Student name of u2: "+u2.studentName);
    }
}
class University{
    static String universityName;
    String studentName;

    public static void displayName()
    {
        System.out.println("Name of the University is: "+universityName);
    }
}
