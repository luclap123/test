import java.util.Scanner;

public class giaipt2 {
    public static void main (String args[])
    {
        Double a,b,c;
        double x1,x2;
        Scanner sc = new Scanner (System.in);
        System.out.println("input a : ");
        a=sc.nextDouble();
        System.out.println("input b : ");
        b=sc.nextDouble();
        System.out.println("input c : ");
        c=sc.nextDouble();
        Double delta;
        delta = b*b -4*a*c;
        if (delta < 0)
        {
            System.out.println("the equation has no solution");
        }
        else if (delta==0)
        {
            x1=-b/(2*a);
            System.out.println("the equation x1=x2= "+ x1);
        }
        else 
        {
            x1= (-b - Math.sqrt(delta))/ (2*a);
            x2= (-b + Math.sqrt(delta))/ (2*a);
            System.out.println("the equation has two distinguished solutions : ");
            System.out.println("x1 = "+ x1);
            System.out.println("x2 = "+ x2);
        }
    }
    
}
