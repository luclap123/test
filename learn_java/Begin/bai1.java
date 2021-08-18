import java.util.Scanner;
public class bai1
{
    public static void main(String[] args)
    {
        double a,b;
        Scanner sc = new Scanner (System.in);
        System.out.println("input a: ");
        a= sc.nextDouble();
        System.out.println("input b: ");
        b= sc.nextDouble();

        System.out.println("abs = " + Math.abs(a));
        System.out.println("max = "+ Math.max(a,b));
        System.out.println("min = "+ Math.min(a,b));
        System.out.println("round = "+ Math.round(a));
        System.out.println("pow = "+ Math.pow(a,b));
    }
}
