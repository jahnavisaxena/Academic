public class fourth {
    public static void main(String[] args) {
      MyThread t1 = new MyThread();
      MyThread2 t2 = new MyThread2();
      System.out.println(t1.getState());

      t1.start();
      System.out.println(t1.getState());

      t2.start();
      System.out.println(t1.getState());

    }
}

class MyThread extends Thread{
    public void run(){
        for(int i=0;i<=5;i++){
           // System.out.println("thread is running "+i);
        }
    }
}

class MyThread2 extends Thread{
    public void run(){
        for(int i=0;i<=5;i++){
            System.out.println("THREAD RUNS "+i);
        }
    }
}
