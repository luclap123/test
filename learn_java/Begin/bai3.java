import java.util.Scanner;

public class bai3 {
    public static void main(String[] args)
    {
        int n;
        int i=1;
        
        Scanner sc = new Scanner (System.in);
        System.out.print("input : ");
        n= sc.nextInt();
        while (i<=n)
        {
            if (n%i==0)
            {
                System.out.println("uoc so : "+i);
                i++;
            }
        }
    }

}
