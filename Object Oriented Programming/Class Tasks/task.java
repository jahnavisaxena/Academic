
import java.util.*;
public class task_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Range_operations ro = new Range_operations();
        mathematical_operations mo = new mathematical_operations();
        int choice;
        do {
            System.out.println("Enter a choice: ");
            System.out.println("1. Perform range operations\n2.Perform math operations\n3.Exit");
            choice = sc.nextInt();
            sc.close();
        switch(choice)
        {
            case 1 :
            System.out.println("Enter range: ");
            int r = sc.nextInt();
             System.out.print("Sum of range: "+ro.sum_range(r));
             ro.square(r);
             ro.even_odd(r);
             break;
            
            case 2:
             int a = sc.nextInt();
             mo.trigno(a);
             mo.log(a);
             mo.random_number(a);
             break;

            case 3:
            System.out.println("Exit");
            break;

            default:
            System.out.println("Enter your choice");
        }

        }while(choice != 3);
        }
        
        
    }


class Range_operations{
    public int sum_range(int r){
        int sum =0;
        for(int i=0;i<=r;i++)
        {
            sum = sum +i;
        }
        return sum;
    }

    public void square(int r)
    {
        for(int i=0;i<r;i++)
        {
            System.out.println(i*i);
        }
    }

    public void even_odd(int r)
    {
        int count_even = 0;
        int count_odd = 0;
        for(int i=0;i<=r;i++)
        {
            if(i%2 == 0)
            {
                count_even++;
            }
            else{
                count_odd++;
            }
        }
        System.out.println("Number of even numbers are: "+count_even+" and odd are: "+count_odd);

    }
}

class mathematical_operations{
    public void trigno(int angle)
    {
        double radians = Math.toRadians(angle);
        System.out.println(Math.sin(radians));
        System.out.println(Math.cos(radians));
        System.out.println(Math.tan(radians));
    }

    public void log(double a)
    {
        System.out.println(Math.log(a));
    }

    public void random_number(int a)
    {
        Random r = new Random();
        int ran = r.nextInt(a);
        System.out.println("random number: "+ran);
    }
}

