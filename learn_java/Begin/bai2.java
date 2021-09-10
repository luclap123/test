import java.util.Scanner;

public class bai2 {
    public static void main (String args[])
    {
        double n;
        Scanner sc = new Scanner(System.in);
        System.out.println("input n : ");
        n = sc.nextDouble();
        double s=0;
        int i=1;
        while(i <= n)
        {
            s = s + 1.0 /((2*i)+1);  
            i++;
        }
        System.out.println("value : "+ s);

    }
    
}
