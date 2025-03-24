public class third {
    public static void main(String[] args) {//default thread is created in main function
        employee t1 = new employee("thread 1");
        manager t2 = new manager("thread 2");
        t1.start();
        t2.start();//creating a thread
    }
}
 class employee extends Thread{
    employee(String nameOfThread){
        super(nameOfThread);
    }
    @Override
    public void run(){
        System.out.println("hello "+Thread.currentThread().getName());//getting the name of the current thread
    }
}

class manager extends Thread{
    manager(String name){
        super(name);
    }
    @Override
    public void run(){
        System.out.println("hi " + Thread.currentThread().getName());//getting the name of the current thread
    }
}
