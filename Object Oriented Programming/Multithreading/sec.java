public class sec {
    public static void main(String[] args) {
        Employee t1 = new Employee();
        t1.start();
        System.out.println(Thread.activeCount());
    }
}
class Employee extends Thread{
    @Override
    public void run() {
        System.out.println("hello");
    }
}
