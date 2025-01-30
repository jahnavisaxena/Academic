public class task2{
    //multilevel inheritance
    public static void read()
    {
        System.out.println("print read");
    }
    public static void main(String[] args) {
        admin a1 = new admin();
        guest g1 = new guest();
        developer d1 = new developer();
        g1.read();
        d1.read();
        d1.write();
        a1.read();
        a1.write();
        a1.manage();
        read();
    }
}

class guest {
    void read()
    {
        System.out.println(" read update");
    }
}

class developer extends guest{
    
    void write()
    {
        System.out.println("write also");
    }
}

class admin extends developer{
    
    void manage()
    {
        System.out.println("manage also");
    }
    read();
    
    {
        System.out.println("Admin");
    }
}
