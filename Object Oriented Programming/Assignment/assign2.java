public class ass2 {
    public static void main(String[] args) {
        chef c = new chef("Chef tanay");
        Thread chefabc = new Thread(c);
        chefabc.start();
        System.out.println("chef  cooked ");

    }
}

class Worker implements Runnable{
    String name;
    Worker(String name){
        this.name = name;
    }
    public void run(){
        System.out.println("It is working");
        try{
            Thread.sleep(2000);
        }catch(InterruptedException e){
            System.out.println("Interrupted");
        }
        System.out.println("finish work");
    }
}

class chef extends Worker{
    chef(String name){
        super(name);
    }
    @Override
    public void run(){
        System.out.println("cooking finished");
    }
}

