public class ass3 {
    public static void main(String[] args) {
        CleaningTask c = new CleaningTask("Cleaning Task");
        CleaningManager cm = new CleaningManager("Cleaning Manager");
        Thread t1 = new Thread(c);
        Thread t2 = new Thread(cm);
        t1.start();
        t2.start();
    }
}

class CleaningTask implements Runnable{
    String name;
    CleaningTask(String name){
        this.name = name;
    }
    public void run(){
        System.out.println("Cleaning is in process");
      }  
}

class CleaningManager extends CleaningTask{
    CleaningManager(String name){
        super(name);
    }
    @Override
    public void run(){
        System.out.println("Cleaning is done");
    }
}

