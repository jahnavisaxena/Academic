/*
 3.	Define a Worker class with DailyWorker and SalariedWorker as its subclasses. Each worker has a
  name and salary rate. Implement a method computePay(int hours) to compute weekly pay. DailyWorker
   is paid based on the number of days worked (assuming 8 hours per day), whereas SalariedWorker 
   receives a fixed wage for 40 hours per week, regardless of actual hours worked. Use polymorphism 
   to implement this program and test worker salary calculations. 
 */
public class question3 {
    public static void main(String[] args) {
        DailyWorker dw = new DailyWorker();
        dw.name = "jahnavi";
        dw.salary_rate = 30;
        dw.computePay(4);
        SalariedWorker sw = new SalariedWorker();
        sw.name = "tanay";
        sw.salary_rate = 50;
        sw.computePay(19);

   }
}

abstract class Worker{
    String name;
    int salary_rate;
    abstract void computePay(int hours);
}

class DailyWorker extends Worker{
    @Override
    void computePay(int hours)
    {
        System.out.println("Daily worker salary is: "+hours*salary_rate);
    }
}

class SalariedWorker extends Worker{
    @Override
    void computePay(int hours)
    {
        System.out.println("Salaried worker salary is: "+40*salary_rate);
    }
}
