/*Write a Java program to create an abstract class Employee with abstract methods 
calculateSalary() and displayDetails(). Derive two classes Manager and Developer from 
Employee and implement the methods to calculate the salary (e.g., based on fixed salary 
or hourly wage) and display employee details (e.g., name, role, salary). In the main() 
method, create objects of Manager and Developer and test their functionality */
public class question2 {
    public static void main(String[] args) {
        manager m = new manager();
        m.name = "Megha";
        m.role = "Manager";
        m.calculateSalary();
        m.displayDetails();
        developer d = new developer();
        d.name = "Dhruv";
        d.role = "Developer";
        d.hours = 10;
        d.calculateSalary();
        d.displayDetails();
    }
    
}
abstract class Employee{
    abstract void calculateSalary();
    abstract void displayDetails();
}

class manager extends Employee{
    String name;
    String role;
    double salary;
    @Override
    void calculateSalary(){
        salary = 100000;
    }
    @Override
    void displayDetails(){
        System.out.println("Name : "+name+" Role : "+role+" Salary : "+salary);
    }
}
class developer extends Employee{
    String name;
    String role;
    double salary;
    int hours;
    @Override
        void calculateSalary(){
            salary = hours*100;
        }
        void displayDetails(){
            System.out.println("Name: "+name+" Role : "+role+" Salary : "+salary);
        }
}
