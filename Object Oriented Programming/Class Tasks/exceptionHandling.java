public class task6 {
    public static void main(String[] args) {
        int a = 4;
        int b =0;
        
        try{
            int c = a/b;
            System.out.println("Answer : "+ c);
        }

        catch(ArithmeticException e)
        {
            System.out.println("Division by zero not allowed");

            throw e;//back the control to java
        }

        
        finally{
            System.out.println("Program executes");
        }

}


}
