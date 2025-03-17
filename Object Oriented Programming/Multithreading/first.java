public class first {
    public static void main(String[] args) {
        System.out.println(Thread.currentThread().getName());
        Thread t1 = new Thread();
        Thread t2 = new Thread();
        Thread t3 = new Thread();
        Thread t4 = new Thread();

        System.out.println(Thread.activeCount());
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        System.out.println(Thread.activeCount());
        System.out.println(t1.getName());
    }
}
