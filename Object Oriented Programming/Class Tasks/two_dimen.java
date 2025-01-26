import java.util.*;

public class create {
    public static void main(String[] args) {
        int m[][] = new int[3][3];
        Scanner sc = new Scanner(System.in);
        for(int i=0;i<m.length;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.print("Enter element "+i+" X "+j+": ");
                m[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<m.length;i++)
        {
            for(int j=0;j<m[0].length;j++)
            {
                System.out.print(m[i][j]+" ");
            }
            System.out.println();
        }
    }
}
