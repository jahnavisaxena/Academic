public class fourth {
    public static void main(String[] args) {
      MyThread t1 = new MyThread();
      Myr r = new Myr();
        Thread t2 = new Thread(r);
        t2.start();
        try{
            t1.join();
        }
        catch(Exception e){
            System.out.println(e);
        }

    }
}

class MyThread extends Thread{
    public void run(){
        for(int i=0;i<=5;i++){
           System.out.println("thread is running "+i);
           try{
            Thread.sleep(1000);
              }catch(Exception e){
                System.out.println(e);  
           }
        }
    }
}

class MyThread2 extends MyThread{
    public void run(){
        for(int i=0;i<=5;i++){
            System.out.println("THREAD RUNS "+i);
        }
    }
}

class Myr implements Runnable{
    public void run(){
        for(int i=0;i<=3;i++){
            System.out.println("running thread"+i);
        }
    }
}
