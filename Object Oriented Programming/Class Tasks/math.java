import java.util.Random;
import java.util.Scanner;
import java.lang.Math;//lang is deafult package

public class simpleUtitlites {
    public static void main(String[] args) {
        int min = 1;
        int max = 99;
        Scanner sc = new Scanner(System.in);//takes raw data
        //int i = sc.nextInt();
        Random r = new Random();
        int newr = r.nextInt(100);
        int r2 = r.nextInt(100);
        double newr1 =(int)Math.pow(newr,2);
        int min_int = Math.min(6,10);
        System.out.println("Min integer is: "+min_int);
        System.out.println((int)Math.sqrt(newr));
        System.out.println(r2);
        System.out.println(newr1);
        sc.close();
    }
}


