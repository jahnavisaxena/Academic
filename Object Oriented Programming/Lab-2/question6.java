public class question6{
    public static void main(String[] args) {
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=2*i-1;j++)
            {
                if(i%2!=0)//if row number is odd
                {
                    System.out.print("?");
                }
                else{
                    System.out.print("#");//if row number is even
                }
            }
            System.out.println();//move to next line after each row
        }
    }
}
