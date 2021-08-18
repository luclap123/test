import java.util.Scanner;

public class trycatch
{
    public static void main(String[] args)
    {
        int n=0;
        Scanner sc = new Scanner (System.in);
        
        try
        {
            System.out.println("input n : ");
            n=sc.nextInt();
        }
        catch (Exception e)
        {
            System.out.println("wrong ");
        }
        finally
        {
            System.out.println("hey yoo");
        }
        System.out.println("value : "+n);
    }
}