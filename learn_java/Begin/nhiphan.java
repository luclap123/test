import java.util.Scanner;

public class nhiphan {
    
    public static void main(String[] args)
    {
        int n;
        Scanner sc = new Scanner (System.in);
        System.out.println("input : ");
        n = sc.nextInt();
        h10(n);   
    }
    static void h10(int n)
    {
        int s=0;
        if (n>0)
        {
            s=n%2;
            n=n/2;
            h10(n);
            System.out.print(s);
        }
    }
}
