public class sec {
    public static void main(String[] args) {
        Employee t1 = new Employee();
        Manager t2 = new Manager();
        Employee t3 = new Employee();
        Manager t4 = new Manager();
        t1.start();
        System.out.println(Thread.currentThread().getId());

        t2.start();
        System.out.println(Thread.currentThread().getId());

        t3.start();
        System.out.println(Thread.currentThread().getId());

        t4.start();
        System.out.println(Thread.currentThread().getId());


        System.out.println(Thread.activeCount());

    }
}
class Employee extends Thread{
    @Override
    public void run() {
        System.out.println("hello");
    }
}

class Manager extends Thread{
    @Override
    public void run() {
        System.out.println("manager");
    }
}
