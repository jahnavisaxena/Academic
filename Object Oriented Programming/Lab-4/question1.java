/*
 
1.	Write a Java program to demonstrate that a private member of a superclass 
cannot be accessed directly from a derived class. 

 */
public class question1{
    public static void main(String[] args) {
        
    }
}
class Animal{
    private String name;
}

class horse extends Animal{
    void display(){
        System.out.println(name);
    }
}
