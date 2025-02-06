/*
A student is developing a course registration system that allows students to enroll in 
courses. Each course has a course name and a course code. Implement a Course class with 
appropriate attributes and use the “this” keyword to differentiate between class attributes 
and constructor parameters during initialization. Create an object of the Course class and 
display the course details.
 */
public class question5 {
    public static void main(String[] args) {
        Course c1 =new Course("computer Science",67);
        Course c2 = new Course("BBA",23);
        c2.courseName = "Btech";
        c2.courseCode =45;
       System.out.println("Course Name: "+c1.courseName+" Course Code: "+c1.courseCode);
    }
}
class Course{
    String courseName;
    int courseCode;
    Course(String courseName,int courseCode)
    {
        this.courseName = courseName;
        this.courseCode = courseCode;
    }
}
