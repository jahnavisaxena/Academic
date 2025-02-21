/*
 2.	Design a Java class Employee with attributes name, empid, and 
 salary. Implement a default constructor, a parameterized constructor, 
 and methods to return the employee’s name and salary.
  Add a method increaseSalary(double percentage) to raise the salary by a
   user-specified percentage. Create a subclass Manager with an additional 
   instance variable department. Develop a test program to validate these
    functionalities. 
 */
import java.util.*;
public class question5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the percentage raise: ");
        double percentage = sc.nextDouble();
        Manager m = new Manager("John",1,30000,"HR");
        System.out.println(m.increaseSalary(percentage));

    }
}

class Employee{
    String name;
    int empid;
    double salary;

    
    Employee(String name,int empid,double salary){
        this.name = name;
        this.empid = empid;
        this.salary = salary;
    }

    String getName(){
        return name;
    }

    double getSalary(){
        return salary;
    }

    double increaseSalary(double percentage){
         return salary + (salary*percentage/100);
    }
}

class Manager extends Employee{
    String department;

    Manager(String name,int empid,double salary,String department){
        super(name,empid,salary);
        this.department = department;
    }
}
