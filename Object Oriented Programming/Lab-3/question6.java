/*
 A company wants to develop an Employee Management System to track employee details 
such as name, department, salary, and employee ID. The system should also calculate the 
total salary expenditure and keep a record of the total number of employees. Implement a 
Java program by creating an Employee class that includes instance variables for employee 
ID, name, department, and salary. The class should have a default constructor that 
initializes employee details with default values and a parameterized constructor that sets 
employee details based on user input. Use a static variable totalEmployees to track the total 
number of employees and implement a static method to display this count. Additionally, 
define a method calculateSalary() that returns the salary of the employee and another 
method displayEmployeeInfo() to display all employee details. To ensure data 
encapsulation, mark the salary variable as private and provide a public method to access it. 
Declare the totalEmployees variable as static so that it is shared among all instances. In the 
main method, create multiple Employee objects using both default and parameterized 
constructors. Use the this keyword in the constructors to distinguish between classvariables and 
constructor parameters. Finally, display the total number of employees and 
the salary details for each employee. The program should successfully demonstrate the 
behavior of static and non-static members, the initialization of objects using constructors, 
and the role of access modifiers in an employee management scenario. 
 */
public class question6 {
    public static void main(String[] args) {
        Employee e1 = new Employee("John", 1, "HR", 50000);
        Employee e2 = new Employee("Tanay",2,"IT",60000);
        Employee e3 = new Employee("Rahul",3,"Finance",70000);
        Employee e4 = new Employee("Rohan",4,"Marketing",80000);
        e1.displayEmployeeInfo();
        e2.displayEmployeeInfo();
        e3.displayEmployeeInfo();
        e4.displayEmployeeInfo();
        Employee.displayTotalEmployess();
    }
}
class Employee{
    String name;
    int ID;
    String department;
    private double salary;
    static int totalEmployees = 0;
    Employee(String name,int ID,String department,double salary)
    {
        this.name = name;
        this.ID = ID;   
        this.department = department;
        this.salary = salary;

    }
    public static void displayTotalEmployess()
    {
        System.out.println("Total number of employees are: "+totalEmployees);
    }

    public double calculateSalary()
    {
        return salary;
    }

    public void displayEmployeeInfo()
    {
        totalEmployees++;
        System.out.println("Name: "+name);
        System.out.println("ID: "+ID);
        System.out.println("Department: "+department);
        System.out.println("Salary: "+calculateSalary());
        System.out.println("Total number of employees are: "+ totalEmployees);
    }
}
